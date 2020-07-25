#include"employee.h"
#include<string.h>
#include<iostream>
using namespace std;
employee::employee()
{
	name=new char[1];
	employ_no=0;
	basic_sal=0;
	strcpy(name,"\0");
}
employee::employee(int i,char *a,float s)
{
	int len;
	employ_no=i;
	basic_sal=s;
	cout<<"Employee()  "<<basic_sal<<endl;
	for(len=0;a[len]!='\0';len++);
	name=new char[len+1];
	strcpy(name,a);	
}
employee::~employee()
{
	cout<<"employee destructor"<<endl;
}
void employee::set_employ_no(int i)
{
	employ_no=i;
}
int employee::get_employ_no()
{
	return employ_no;
}
void employee::set_name(char *n)
{
	strcpy(name,n);
}
char employee::get_name()
{
	cout<<"name="<<name<<endl;
}
void employee::set_basic_sal(float s)
{
	basic_sal=s;
}
float employee::get_basic_sal()
{
		cout<<"get_basic_sal()  "<<basic_sal<<endl;
	return basic_sal;
}

