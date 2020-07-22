#include"stack.h"
#include<ostream>
#include<iostream>
using namespace std;
stack::stack()
{
	arr=NULL;
	size = 0;
	index = 0;	
}
stack::stack(int s)
{
	arr = new int[s+1];
	//will start from -1 initially but +1 for starting from 0.
	size = s;
	index = -1;
}
stack::~stack()
{
	delete [] arr;
	cout<<"stack destructor"<<endl;
}
void stack::push(int n)
{
	if(index<size)
	{
		index=index+1;
		arr[index]=n;
	}
	else
	{
		cout<<"stack is full"<<endl;
	}
}
int stack::pop()
{
	int t;
	if(index==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		t=arr[index];
		index--;
		return t;
	}
}
int stack::get_index()
{
	return index;
}
void stack::operator+=(stack s)
{
	int in,i,j=0;
	int *ptr;
	in=-1;
	size=size+s.size;
	//index=index=s.index;
	ptr=new int[size];
	for(i=0;i<index;i++)
	{
		ptr[j]=arr[i];
		in++; j++;
	}
	for(i=0;i<s.index;i++)
	{
		ptr[j]=s.arr[i];
		in++; j++;
	}
	index=in;size=s;delete [] arr;
	arr=ptr;
}
ostream& operator<<(ostream& out,stack& x)
{
	int i;
	for(i=0;i<=x.get_index();i++)
	{
		out<<x.arr[i]<<endl;
	}
}
