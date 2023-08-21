#include<iostream>
using namespace std;
int prime(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x/i!=0)
		{
			cout<<"prime number";
		}
		
	}
}
int main()
{
	int n;
	cout<<"enter a number:-"<<endl;
	cin>>n;
	prime(n);
	return 0;
	
}
