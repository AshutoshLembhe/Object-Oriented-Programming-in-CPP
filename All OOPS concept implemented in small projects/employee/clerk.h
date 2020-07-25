#ifndef __CLERK_H__
#define __CLERK_H__
#include"employee.h"
class clerk:public employee{
	int overtime;
	public:
		clerk();
		clerk(int i,char *m,int j,int t);
		~clerk();
		void set_overtime(int t);
		int get_overtime();
		float calsalary();
		void display();
};
#endif
