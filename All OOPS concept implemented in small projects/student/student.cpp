#include"student.h"
#include<string.h>
#include<iostream>
#include<ostream>
#include<istream>
using namespace std;
student::student()
{
	name = new char[1];//malloc syntax for c++
	age = 0;strcpy(name,"\0");
}
student::student(int i,char *n)
{
	int len;
	for(len=0;n[len]!='\0';len++);
	name = new char[len+1];
	age = i;
	strcpy(name,n);
}
student::student(student &s)
{
	int len;
	age=s.age;
	cout<<"Copy Constructor called \n";
	len = strlen(s.name);
	name = new char[len+1];
	strcpy(name,s.name);
}
student::operator=(student &s)
{
	delete [] name;
	int len;
	age = s.age;
	cout<<"Assignment operator called \n";
	len = strlen(s.name);
	name = new char[len+1];
	strcpy(name,s.name);
}
student::operator=(int x)
{
	age = x;
}
student::operator=(char *m)
{
	int len;
	len=strlen(m);
	name=new char[len+1];
	strcpy(name,m);
}

student::~student()
{
	delete [] name;//free space for c++
	cout<<"student destructor"<<endl;
}
void student::set_age(int a)
{
	age = a;
}
int student::get_age()
{
	return age;
}
void student::set_name(char *n)
{
	
	strcpy(name,n);
}

ostream& operator<<(ostream& out, student& x)
{
	out<<"age"<<"\t"<<"name"<<endl;
	out<<x.age<<"\t"<<x.name<<endl;
	return out;
}
istream& operator>>(istream& in,student &x)
{
	in>>x.age;
	in>>x.name;
}
