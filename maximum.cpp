#include<iostream>
using namespace std;
void max(int arr[],int size){
	int max;
	for(int i=0;i<size;i++){
		if(arr[i]>arr[i+1])
		{
			max=arr[i];
		}
	}
	cout<<"maximum number is "<<max;
}
int main(){
	int arr[100];
	int size;
	cout<<"enter the size of array";
	cin>>size;
	cout<<"enter the array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	max(arr,size);

return 0;	
}
