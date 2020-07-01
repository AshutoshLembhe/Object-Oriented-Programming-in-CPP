#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	//v.emplace_back(4);
	for(auto int i:v)
	{
		cout<<i<<endl;
	}
	
	vector<pair<int,string> > v2;
	v2.push_back(make_pair(1,"abc"));
	v2.push_back(2,"def");
	for(auto int i:v2){
		cout<<i.first<<","<<i.second<<endl;
	}
	vector<int> v3(5,200);
	v3[0]=500;
	v3[1]=700;
	for(auto int i:v3)
	{
		cout<<i<<end;
	}
	
	vector<vector<int> > v4;
	v4.push_back({1,2,3,4});
	v4.push_back({10,20,30,40});
	for(auto int i:v4)
	{
		for(auto j:i)
		{
			cout<<j<<endl;
		}
	}

}
