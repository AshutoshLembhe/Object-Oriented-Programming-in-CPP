#ifndef _STACK_H
#define _STACK_H
#include<iostream>
using namespace std;
class stack{
	int size;
	int index;
	int *arr;
	public:
		stack();
		stack(int s);
		~stack();
		void push(int n);
		int pop();
		int get_index();
		void operator+=(stack s);
		friend ostream& operator<<(ostream& out,stack& x);
};
ostream& operator<<(ostream& out,stack& x);
#endif
