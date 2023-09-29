#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int arr[100],size;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	cout<<"enter the array element that you wnat to add:-"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"sum of array is:-  "<<sumArray(arr,size);
return 0;
}
