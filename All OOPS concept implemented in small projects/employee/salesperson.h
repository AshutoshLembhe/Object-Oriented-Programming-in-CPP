#ifndef __SALESPERSON_H__
#define __SALESPERSON_H__
#include"employee.h"
class salesperson:public employee{ 
	int total_sales;
	public:
		salesperson();
		salesperson(int i,char *m,float j,int t);
		~salesperson();
		void set_total_sales(int i);
		int get_total_sales();
		float calsalary();
		void display();
};
#endif
