#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main()
{
	queue<pair<int,string> > q;
	q.push(make_pair(1,"abc"));
	q.push(make_pair(2,"def"));
	q.push(make_pair(3,"ghi"));
	cout<<q.front().first<<","<<q.front().second<<endl;
	q.pop();
	cout<<q.front().first<<","<<q.front().second<<endl;
	
}
