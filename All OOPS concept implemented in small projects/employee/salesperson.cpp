#include"salesperson.h"
#include<iostream>
using namespace std;
salesperson::salesperson()
{
	total_sales=0;
}
salesperson::salesperson(int i,char *m,float j,int t):employee(i,m,j)
{
	total_sales=t;
	
}
salesperson::~salesperson()
{
	cout<<"salesperson destructor"<<endl;
}
void salesperson::set_total_sales(int i)
{
	total_sales=i;
}
int salesperson::get_total_sales()
{
	return total_sales;
}
float salesperson::calsalary()
{
	float total,salary;
	total=(total_sales*15.0)/100.0;
	cout<<"  "<<get_basic_sal()<<endl;
	cout<<"  "<<total<<endl;
	salary=get_basic_sal()+total;
	return salary;
}
void salesperson::display()
{
	cout<<"salesperson salary="<<calsalary()<<endl;
}
