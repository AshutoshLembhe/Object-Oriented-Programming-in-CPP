#include"student.h"
#include<iostream>
using namespace std;
void student::set_data()
{
	cout<<"enter roll no:"<<endl;
	cin>>rno;
	cout<<"enter name:"<<endl;
	cin>>name;
	cout<<"enter age:"<<endl;
	cin>>age;
}
void student::display()
{
	
	cout<<rno<<" \t "<<name<<" \t "<<age<<endl;
}
