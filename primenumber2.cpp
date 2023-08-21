#include<iostream>
using namespace std;
bool isprime(int x)
{
	for(int i=2;i<=x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
		return 1;
	}
}
int main()
{
	int n;
	cout<<"enter a number:-"<<endl;
	cin>>n;
	int prime=isprime(n);
	if(prime)
	{
		cout<<"prime number";
	}
	else{
		cout<<"not prime";
		
	}
}
