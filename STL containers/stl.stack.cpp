#include<iostream>
using namespace std;

int main()
{
	stack<int> st;
	st.push_back(1);
	st.push_back(2);
	st.push_back(3);
	st.push_back(4);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top<<endl;
	st.pop();
	cout<<st.size()<<endl;
}
