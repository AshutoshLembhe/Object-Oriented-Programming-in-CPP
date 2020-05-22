#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define MAX(a,b) ((a>b)? a:b)
#define square(a) ((a)*(a))
template <typename T>
int max(int a,int b)
{
	return (a>b)? a:b;
}
double max(double a,double b)
{
	return (a>b)? a:b;
}
char max(char a, char b)
{
	return (a>b)? a:b;
}
int main()
{
	cout<<MAX(10,20)<<endl;
	cout<<MAX(2.4,3.6)<<endl;
	cout<<MAX('A','C')<<endl;
	cout<<square(5)<<endl;
}
