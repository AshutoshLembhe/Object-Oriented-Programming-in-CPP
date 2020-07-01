#include<iostream>
#include<string>
using namespace std;
 
template<typename T,typename U>
class pair{
	public:
		T first;
		U second;
		pair() {}; //default constructor.
		pair(T x,U y){ //user defined constructor.
			first=x;
			second=y;
		}
};
int main()
{
	pair<int,string> p;
	p.first=10;
	p.second="ashutosh";
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	
	pair<int,string> p1(100,"ashutosh");
	cout<<p1.first<<p1.second<<endl;
	
}
