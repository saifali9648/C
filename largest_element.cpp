#include<iostream>
using namespace std;
int largest(int arr[],int size){
	int lrg=arr[0];
	for(int i=0;i<size;i++){
		if(lrg<arr[i]){
			lrg=arr[i];
		}
	}
	return lrg;
}
int main(){
	int arr[100],size;
	cout<<"enter the size of array:-"<<endl;
	cin>>size;
	cout<<"enter the elements:- "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"largest number is "<<largest(arr,size);
	return 0;
}
