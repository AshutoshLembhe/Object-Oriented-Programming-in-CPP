#include"manager.h"
#include<iostream>
using namespace std;
manager::manager()
{
	bonus=0;
}
manager::manager(int i,char *m,int j,int b):employee(i,m,j)
{
	bonus=b;
}
manager::~manager()
{
	cout<<"manager"<<endl;
}
void manager::set_bonus(int b)
{
	bonus=b;
}
int manager::get_bonus()
{
	return bonus;
}
float manager::calsalary()
{
	float calsalary;
	calsalary=get_basic_sal()+bonus;
	return calsalary;
}
void manager::display()
{
	cout<<"manager salary="<<calsalary()<<endl;
}

