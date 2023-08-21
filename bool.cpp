#include <iostream>
#include <string>
using namespace std;
int main()
{
	cout<<"saif"<<endl;
	bool myname=true;
	bool yourname=false;
	cout<<myname<<endl;
	cout<<yourname<<endl;
	char a=65,b=100;
	cout<<a<<endl<<b<<endl;
	string fname="saif";
	string lname="ali";
	string fullname= fname+" "+lname;
	cout<<fullname<<endl;
	string sfullname=fname.append(lname);
	cout<<sfullname<<endl;
	cout<<"the length of fullname is "<<fullname.length()<<endl;
	cout<<"the length of sfullname is "<<sfullname.length()<<endl;
	cout<<fname[0]<<endl;
	fname[0]='k';
	cout<<fname;
	cout<<fname[2] <<endl;
	string yrname;
	cout<<"enter your name:-";
	cin>>yrname;
	cout<<"your name is "<<yrname <<endl;
	string sname;
	cout<<"enter your name:-";
	getline (cin, sname);
	cout<<sname;
	return 0;
}
