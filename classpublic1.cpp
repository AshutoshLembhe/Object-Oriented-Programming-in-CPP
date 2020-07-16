//circle.

#include<iostream>
using namespace std;
class circle{
	int x;
	int y;
	float r;
	float area;
	int co;
	public:
		void accept();
		void display();
		void accept_x()
		{
			cout<<"enter x:"<<"\n";
			cin>>x;
		}
		void accept_y()
		{
			cout<<"enter y:"<<"\n";
			cin>>y;
		}
		void accept_r()
		{
			cout<<"enter radius:"<<"\n";
			cin>>r;
		} 
		void display_area()
		{
			float pi=3.14;
			area=r*r*pi;
			cout<<"area of circle:"<<area<<"\n";
		}
		void display_co()
		{
			cout<<"(x,y)"<<x<<" "<<y<<"\n";
		}
};
int main()
{
	circle obj;
	obj.accept_x();
	obj.accept_y();
	obj.accept_r();
	obj.display_area();
	obj.display_co();
}
