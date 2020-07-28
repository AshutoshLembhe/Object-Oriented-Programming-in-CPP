#ifndef __STUDENTCPP_H__
#define __STUDENTCPP_H__
#include<iostream>
using namespace std;
class student{
	int rno;
	char name[100];
	int age;
	public:
		void set_data();
		void display();		
};
#endif
