#include<iostream>
using namespace std;
int factorial(int x)
{
	int fact=1;
	for(int i=x;i>=1;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int ncr(int x,int y)
{
	int num=factorial(x);
	int denom=factorial(y)*factorial(x-y);
	int ans=num/denom;
	return ans;
}
int main()
{
	int n,r;
	cout<<"enter the value of n and r:"<<endl;
	cin>>n>>r;
	int ans=ncr(n,r);
	cout<<ncr;
	cout<<"answer"<<ans;
	return 0;
}
