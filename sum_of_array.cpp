#include<iostream>
using namespace std;
int sumarr(int arr[],int size)
{
	int sum;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[100];
	cout<<"enter the the value"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"sum of all element in array:- "<<sumarr(arr,size);
	return 0;
}
