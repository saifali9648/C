#include<iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=5)
	{
		int j=i;
		while(j<=4)
		{
			cout<<" ";
			j++;
		}
		int k=1;
		while(k<=i)
		{
			cout<<"*";
			k++;
		}
		i++;
		cout<<endl;
	}
	return 0;
}
