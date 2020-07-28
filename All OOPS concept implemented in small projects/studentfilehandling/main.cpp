#include"student.h"
#include<fstream>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	ofstream f1;
	student s1[10];
	int i,n;
	cout<<"enter no. for range"<<endl;
	cin>>n;
	f1.open("studentdata.dat");
	for(i=0;i<n;i++)
	{
		s1[i].set_data();
		f1.write((char *)&s1[i],sizeof(s1[i]));
	}
	cout<<"rollno \t names \t  age"<<endl;
	for(i=0;i<n;i++)
	{
		s1[i].display();
	}
	f1.close();
}
