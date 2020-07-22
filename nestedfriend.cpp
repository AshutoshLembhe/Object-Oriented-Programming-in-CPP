#include<iostream>
using namespace std;
class twovalue{
	int a;
	int b;
	public:
		friend class Min;
		twovalue(int i,int j);
};
twovalue::twovalue(int i,int j)
{
	a=i;b=j;
}
class Min{
	public:
		int min(twovalue x);
};
int Min::min(twovalue x)
{
	return x.a<x.b? x.a:x.b; 
}
int main()
{
	twovalue ob(10,20);
	Min m;
	cout<<m.min(ob)<<endl;
}
