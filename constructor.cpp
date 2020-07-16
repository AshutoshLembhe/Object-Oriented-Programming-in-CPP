/*#include<iostream>
using namespace std;
class employee{
	public:
		employee()//constructor function is same as name of class.
		{
			cout<<"constructor invoke"<<endl;;
		}
};
int main()
{
	employee e1;//c
	employee e2;
}*/
#include<string.h>
#include<iostream>
using namespace std;
class employee{
	int id;
	char name[80];
	float salary;
	public:
		employee()
		{
			id=0;
			salary=0;
			strcpy(name,"\0");
		}
		employee(int i,char n[80],float s)
		{
			id=i;
			strcpy(name,n);
			salary=s;
		}
		void display()
		{
			cout<<id<<" "<<name<<" "<<salary<<endl;
		}
		~employee()
		{
			cout<<"destructor is called"<<endl;
		}
		void set_id(int a)
		{
			id=a;
		}
		int get_id(int a)
		{
			cout<<"id="<<a<<endl;;
		}
		void set_name(char *names)
		{
			strcpy(name,names);
		}
		char get_name(char *name)
		{
			cout<<"name="<<name<<endl;
		}
		void set_salary(float a)
		{
			salary=a;
		}
		float get_salary(float a)
		{
			cout<<"salary="<<a<<endl;
		}
};
int main()
{
	int no;
	char name[80];
	float sal;
	cout<<"enter name and number"<<endl;
	cin>>no;
	cin>>name;
	cout<<"enter salary"<<endl;
	cin>>sal;
	employee e1=employee(101,"ashutosh",89000);
	employee e2=employee(102,"rahul",92000);
	employee e3;
	e3.set_id(no);
	e3.get_id(no);
	e3.set_name(name);
	e3.get_name(name);
	e3.set_salary(sal);
	e3.get_salary(sal);
	e1.display();
	e2.display();
	e3.display();
}
