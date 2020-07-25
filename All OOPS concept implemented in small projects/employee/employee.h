#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
class employee{
	int employ_no;
	char *name;
	float basic_sal;
	public:
		employee();
		employee(int i,char *a,float s);
		~employee();
		void set_employ_no(int i);
		int get_employ_no();
		void set_name(char *m);
		char get_name();
		void set_basic_sal(float s);
		float get_basic_sal();
		virtual float calsalary()=0;
		void display();
	
};
#endif
