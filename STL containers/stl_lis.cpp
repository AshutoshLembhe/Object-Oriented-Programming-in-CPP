#include<iostream>
#include<string>
#include<list>
using namespace std;

int main()
{
	list<int> ls;
	ls.push_back(10);
	ls.push_back(20);
	for(auto int i:ls)
	{
		cout<<i<<endl;
	}
	ls.push_front(30);
	for(auto int i:ls)
	{
		cout<<i<<endl;
	}
}
