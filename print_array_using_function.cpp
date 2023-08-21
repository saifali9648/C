#include<iostream>
using namespace std;
void getelement(int arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		cin>>arr[i];
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<arr[i];
	}
}

int main()
{
	int n;
	cout<<"enter a array size:"<<endl;
	cin>>n;
	int arr[n];
	getelement(arr,n);
	display(arr,n);
	return 0;
}
