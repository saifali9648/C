#include<iostream>
using namespace std;
int swap(int arr[],int size)
{
	int start=0;
	int next=start+1;
	for(int i=0;i<size;i++)
	{
		if(arr[start]>arr[next])
		{
			swap(arr[start],arr[next]);
			start++;
			next=start+1;
		}
		else
		{
			arr[i]=arr[next];
		}
	}
	
}
void printarr(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
int main()
{
	int arr[100],size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	swap(arr,size);
	printarr(arr,size);
	return 0;
}
