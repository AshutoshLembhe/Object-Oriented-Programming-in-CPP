#include<iostream>
#include<string>
//using namespace std;

template<typename T>
T min(T a, T b)
{
	return(a<b)? a:b;
} 

template<typename T1,typename T2>
void func(T1 a,T2 b)
{
	std::cout<<a<<" "<<b<<std::endl;
}
struct person
{
	std::string name;
	int age;
	//rhs is for taking the right hand value 
	//in the person object which is age.
	bool operator < (const person &rhs)const
	{
		return this->age<rhs.age;
	}
};
//operator oveloading for func 
std::ostream &operator << (std::ostream &os,const person &p)
{
	os<<p.name;
	return os;
}
//since we are using T we can have any datatype in the myswap function.
template <typename T>
void myswap(T &a,T &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	//testing myswap
	char x{'a'};
	char y{'r'};
	myswap(x,y);
	
	std::cout<<x<<" "<<y<<std::endl;
	
	person p1{"ashutosh",20};
	person p2{"sanjay",50};
	person p3=min(p1,p2);
	std::cout<<p3.name<<" is younger"<<std::endl;
	std::cout<<min<int>(2,3)<<std::endl;
	std::cout<<min(2,3)<<std::endl;
	std::cout<<min('A','B')<<std::endl;
	std::cout<<min(12.5,9.2)<<std::endl;
	
	//func test case
	func(p1,p2);
	func<int,int>(10,20);
	func(10,20);
	func<char,double>('A',12.4);
	func('A',12.4);
	func(1000,"testing");
	func(2000,std::string("frank"));
	return 0;
}
