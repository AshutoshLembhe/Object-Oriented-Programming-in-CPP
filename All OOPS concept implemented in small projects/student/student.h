#ifndef _STUDENT_H
#define _STUDENT_H
#include<iostream>
#include<ostream>
#include<istream>

using namespace std;

class student{
	int age;
	char *name;
	
	public:
		student();
		student(int i,char n[80]);
		student(student &s);
		operator=(student &s);
		operator=(int x);
		operator=(char *m);
		~student();
		void set_age(int a);
		int get_age();
		void set_name(char *n);
		char get_name();
		friend ostream& operator<<(ostream& out, student& x);
		friend istream& operator>>(istream& in,student& x);
};
ostream& operator<<(ostream& out,student& x);
istream& operator>>(istream& in,student& x);
#endif

