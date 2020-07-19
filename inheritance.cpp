//inheritance program code.

#include<iostream>
using namespace std;

class building{
	int rooms;
	int floor;
	int area;
	public:
		void set_floor(int num);
		int get_floor();
		void set_rooms(int num);
		int get_rooms();
		void set_area(int num);
		int get_area();
		
};

class house:public building{
	int bedroom;
	int baths;
	public:
		void set_bedroom(int num);
		int get_bedroom();
		void set_baths(int num);
		int get_baths();
};

class school:public building{
	int classrooms;
	int office;
	public:
		void set_classrooms(int num);
		int get_classrooms();
		void set_office(int num);
		int get_office();
};

void building::set_floor(int num)
{
	floor=num;
}
void building::set_rooms(int num)
{
	rooms=num;
}
void building::set_area(int num)
{
	area=num;
}
void house::set_bedroom(int num)
{
	bedroom= num;
}
void house::set_baths(int num)
{
	baths=num;
}
void school::set_classrooms(int num)
{
	classrooms=num;
}
void school::set_office(int main)
{
	office=main;
}
int building::get_rooms()
{
	return rooms;
}
int building::get_floor()
{
	return floor;
}
int main()
{
	house h;
	school s;
	h.set_rooms(20);
	h.set_floor(10);
	s.set_rooms(30);
	s.set_floor(15);
	cout<<"no. of classrooms"<<h.get_rooms()<<endl;
	cout<<"no. of offices"<<h.get_floor()<<endl;
	cout<<s.get_rooms()<<" "<<s.get_floor()<<endl;
}
