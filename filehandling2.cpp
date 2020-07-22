#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	ofstream f1("first.txt");
	f1<<"hi"<<endl;
	f1<<"its me"<<endl;
	f1<<"mario"<<endl;
	//f1.put('mario');
	f1.put('C');
	f1.close();
	ifstream f2("first.txt");//file opened in f2 
	while((!f2.eof()))
	{
		ch=f2.get();//each and every character of a line from f2 is read and stored in ch and is given output in next line. 
		cout<<ch;
	}
	f2.close();
}
