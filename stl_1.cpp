#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=0;i<=3;i++)
	{
		v.push_back(i);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<=3;i++)
	{
		cout<<v[i]<<endl;
	}
	int sum{};
	sum=accumulate(v.begin(),v.end(),0);
	//here the third parameter is the sum initalizing to zero
	cout<<sum<<endl;
}
