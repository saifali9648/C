#include<iostream>
using namespace std;
int max(int arr[],int size){
	int max=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int min(int arr[],int size){
	int min=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int arr[100];
	int size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"maximum is:- "<<max(arr,size)<<endl;
	cout<<"minimum is:- "<<min(arr,size);

return 0;	
}
