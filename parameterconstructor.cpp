#include<iostream>
#include<cstring>
using namespace std;

const int in=1;
const int checked_out=0;
class books{
	private:
		char author[40];
		char title[40];
		int status;
	public:
		books(char *n,char *m,int i);
		int get_status(){return status;}
		void set_status(int i){status=i;}
		void show();
};
books::books(char *n,char *m,int i)
{
	strcpy(author,n);
	strcpy(title,m);
	status=i;
}
void books::show()
{
	cout<<title<<endl;
	cout<<author<<endl;
	if(status==in)
	{
		cout<<"in.\n"<<endl;
	}
	else
	{
		cout<<"out.\n";
	}
}
int main()
{
	books b("moby dick","golden eye",in);
	books b2("satayjit ray","lolwa",checked_out);
	b.show();
	b2.show();
}
