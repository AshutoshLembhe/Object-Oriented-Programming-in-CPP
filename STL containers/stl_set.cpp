#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	//set will store all the elements in sorted order
	set<int> st;
	st.insert(1);
	st.insert(4);
	st.insert(2);
	st.insert(3);
	//finding element and deleting it
	auto it=st.find(1);// binary search will be implemented because of sorted order.
	st.erase(it);
	cout(auto int it:st)
	{
		cout<<it<<",";
	}cout<<endl;
	
	// if an element is not found
	auto it=st.find(14);
	if(it!=st.end())
	{
		cout<<"14 found"<<endl;
	}
	else{
		cout<<"14 not found"<<endl;
	}
}
