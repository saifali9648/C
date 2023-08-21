#include<iostream>
using namespace std;
int fact(int x)
{
	int fact=1;
	for(int i=x;i>=1;i--)
	{
	fact=fact*i;	
	}
	return fact;
}
int ncr(int n,int r)
{
	int nl=fact(n);
	int rl=fact(r)*fact(n-r);
	int result=nl/rl;
	return result;
}
int main()
{
	int n,r;
	cout<<"enter the value of n and r:-:-"<<endl;
	cin>>n>>r;
	int ans=ncr(n,r);
	cout<<"answer is"<<ans;
	
return 0;
}
