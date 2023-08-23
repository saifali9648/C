#include<iostream>
using namespace std;
bool arm(int n)
{
	int org=n;
	int ans;
	while(n>0)
	{
		int r=n%10;
		 int p=r*r*r;
	     ans+=p;
	    n= n/10;
	}
	if(org==ans)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	int found=arm(n);
	if(found)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"not arm strong ";
	}
}
