#include<iostream>
using namespace std;
void rev(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
int main()
{
	int arr[100],n,g;
	cout<<"enter the size of array:-"<<endl;
	cin>>n;
	cout<<"enter the value that you want to rotate array:-"<<endl;
	cin>>g;
	int el=n-1;
	int k=g%el;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rev(arr,n);
	cout<<"f"<<endl;
	display(arr,n);
	rev(arr,k-1);
	rev(arr,k);
	cout<<"l"<<endl;
	display(arr,n);
	return 0;
}
