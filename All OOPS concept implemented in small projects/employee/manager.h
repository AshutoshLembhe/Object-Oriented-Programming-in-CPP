#ifndef __MANAGER_H__
#define __MANAGER_H__
#include"employee.h"
class manager:public employee{
	int bonus;
	public:
		manager();
		manager(int i,char *m,int j,int b);
		~manager();
		void set_bonus(int b);
		int get_bonus();
		float calsalary();
		void display();
};
#endif
