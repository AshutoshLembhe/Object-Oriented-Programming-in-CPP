#include"stack.h"
#include<stdio.h>
#include<ostream>
#include<istream>
using namespace std;
int main()
{ int p;
	stack s1(3);
	stack s2(3);
	stack s3();
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s2.push(5);
	s2.push(6);
	s2.push(7);
	s2.push(8);
	s1+=s2;
	//s1.push(5);
	//cout<<p<<" Hello"<<endl;
	//printf("\n%d",p);
	cout<<s1;
}
