#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=80;
	char line[SIZE];
	ofstream fout;
	fout.open("Introduction");
	fout<<"Hi"<<endl;
	fout<<"this is"<<endl;
	fout<<"Ashutosh"<<endl;
	fout<<"from Vit Chennai"<<endl;
	fout<<"pursuing B.tech"<<endl;
	fout<<"in"<<endl;
	fout<< "Electrical Engineering"<<endl;
	fout.close();
	int x,y,i,count=0;
	cout<<"enter start and end"<<endl;
	cin>>x;
	cin>>y;
	ifstream fin1;
	fin1.open("Introduction");
	while((!fin1.eof()))
	{	
		fin1.getline(line,SIZE);
		count++;
		if((count>=x && count<=y))
		{
			cout<<line<<endl;
		}
	}
	fin1.close();
}
