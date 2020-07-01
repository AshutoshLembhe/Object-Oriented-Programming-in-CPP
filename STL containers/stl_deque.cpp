#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	// supports the features of stack and queue.
	deque<string> dq;
	dq.push_back("abc");
	dq.push_front("pqr");
	cout<<dq.back()<<endl;
	cout<<dq.front()<<endl;
	for(auto int i:dq)
	{
		cout<<i<<",";
	}cout<<endl;
	return 0;
}
