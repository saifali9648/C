#include<iostream>
using namespace std;
bool isprime(int n)
{
	if(n>1)
	{
	for(int i=2;i<n;i++)
	{
		if(n%2==0)
		{
			return 0;
		}
		return 1;
	}
   }
   else{
   	cout<<"enter greater number  than 1"<<endl;
   }
}
int main()
{
	int n;
	cout<<"enter a number that you wnat to check prime or not:-"<<endl;
	cin>>n;
	if(isprime(n))
	{
		cout<<" is prime no"<<endl;
	}
	else
	{
		cout<<"not prime no";
	}
return 0;
}
