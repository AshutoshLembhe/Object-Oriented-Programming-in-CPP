#include"employee.h"
#include"salesperson.h"
#include"manager.h"
#include"clerk.h"
#include<iostream>
using namespace std;
int main()
{
	float j=11300.30;
	employee *e=new salesperson(1102,"ashutosh",j,5000);
	cout<<"Salary = "<<e->calsalary()<<endl;
	employee *ptr=new manager(1103,"rahul",10000.50,6000);
	cout<<"salary="<<ptr->calsalary();
	//	e->display();
	
}
