#include<iostream>
#include<string>
//#include<array>
using namespace std;

int main()
{
	int arr[10]={1,2,3,4,5};
	array<int,10> arr1={1,2,3,4,5,6};// array container
	array<int,10>:: iterator it1;
	for(it1=arr1.begin();it1.end();it1++)
	{
		cout<<*(it1)<<", ";
	}cout<<endl;
	
	for(auto it2=arr1.begin();it2!=arr1.endl();it2++){
		cout<<*(it2)<<endl;
	}cout<<endl;
	
	for(auto x:arr1){
		cout<<x;
	}cout<<endl;
}
