#include<iostream>
using namespace std;
int getmax(int arr[],int size)
{
	int max=INT_MIN;
	for(int i=0;i<=size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int getmin(int arr[],int size)
{
	int min=INT_MAX;
	for(int i=0;i<=size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int main()
{
	int size;
	cout<<"enter the size that how much element you want to enter:-"<<endl;
	cin>>size;
	int arr[100];
	for(int i=0;i<=size;i++)
	{
		cin>>arr[i];
	}
	cout<<"maximum is "<<getmax(arr,size)<<endl;
	cout<<"minimum is "<<getmin(arr,size)<<endl;
	return 0;
	
}
