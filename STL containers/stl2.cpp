#include<iostream>
#include<string>
using namespace std;

int main()
{
	pair<int,string> arr[10]={{10,"abc"},{20,"def"}};
	for(int i=0;i<2;i++)
	{
		cout<<arr[i].first<<","<<arr[i].second<<endl;
	}
	pair<int, pair<int,string>p4;
	p4.first=50;
	p4.second=make_pair(100,"mno");
	cout<<p4.first<<","<<p4.second.first<<","<<p4.second.second<<endl;
}
