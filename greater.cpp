#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter four no:-"<<endl;
	cin>>a>>b>>c>>d;
	if(a>b&&a>c&&a>d)
	{
	cout<<a<<"is greatest no"<<endl;
    }
    if(b>a&&b>c&&b>d)
    {
    	cout<<b<<"is greatest no"<<endl;
	}
	if(c>a&&c>b&&c>d)
    {
    	cout<<c<<"is greatest no"<<endl;
	}
	if(d>a&&d>b&&d>c)
    {
    	cout<<d<<"is greatest no"<<endl;
	}
return 0;
}
