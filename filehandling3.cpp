#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	const int SIZE=80;
	char line[SIZE];
	ofstream fout,fout1;
	fout.open("guns");
	int i,j;
	cout<<"enter names of guns"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>line;
		for(j=0;j<strlen(line);j++)
		     fout.put(line[j]);
	    fout<<"\n";
	}
	fout.close();
	
	fout1.open("bullets.txt");
	cout<<"enter bullets size"<<endl;
	//cout1<<"Bullets are fake"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>line;
		for(j=0;j<strlen(line);j++)
		{
		    //cout<<"in for loop for fout1"<<endl;		
		    fout1.put(line[j]);
		}
		fout1<<"\n";
	}
	
	fout1.close();
	
	ifstream fin1,fin2;
	fin1.open("guns");
	fin2.open("bullets.txt");
	cout<<"guns\t \t \tbullets"<<endl;

	while((fin1||fin2))
	{
		if(fin1.eof()!=0)
		{
			cout<<"exit from gun"<<endl;
			exit(1);
		}
		fin1.getline(line,SIZE);
		cout<<line<<"\t  \t   \t";
		if(fin2.eof()!=0)
		{
			cout<<"exit from bullets"<<endl;
			exit(0);
		}
		fin2.getline(line,SIZE);
		cout<<line<<endl;
	}
}
