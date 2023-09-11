#include<iostream>
using namespace std;
int missingNumber(int arr[],int n)
{
	int temp[n];
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==i)
		{
			temp[i]=1;
		}
		else
		{
			temp[i]=0;
		}
		cout<<"missing element"<<temp[i];
	}
}
int main()
{
	int n=5;
	int arr[n]={1,2,3,5};
	missingNumber(arr,n);
	return 0;
}
