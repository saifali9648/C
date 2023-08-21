#include<iostream>
using namespace std;
bool search(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int size,element,arr[100];
	cout<<"enter the size of array"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element that you want to search in array:-"<<endl;
	cin>>element;
	bool found=search(arr,size,element);
	if(found)
	{
		cout<<"element is present "<<endl;
	}
	else
	{
		cout<<"element is not present "<<endl;
	}
	return 0;
}
