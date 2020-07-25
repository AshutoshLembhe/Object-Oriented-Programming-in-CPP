#include"clerk.h"
#include<iostream>
using namespace std;
clerk::clerk()
{
	overtime=0;
}
clerk::clerk(int i,char *m,int j,int t):employee(i,m,j)
{
	overtime=t;
}
void clerk::set_overtime(int t)
{
	overtime=t;
}
int clerk::get_overtime()
{
	return overtime;
}
float clerk::calsalary()
{
	float total,calsalary;
	total=(overtime*5)/100;
	calsalary=get_basic_sal()+total;
	return calsalary;
}
void clerk::display()
{
	cout<<"clerk salary="<<calsalary()<<endl;
}
