#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number that you want to sum up to"<<endl;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<"  ";
		sum+=i;
		cout<<sum<<endl;
	}
return 0;
}
