//sum of arrays using recursion
#include<iostream>
using namespace std;
int sum(int arr[],int size){
	if(size==0){
		return 0;
	}
	else{
		return arr[0]+sum(arr+1,size-1);
	}
}
int main(){
	int arr[100],size;
	cout<<"enter the size of array:-"<<endl;
	cin>>size;
	cout<<"enter the array elements:- "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<sum(arr,size);
	return 0;
	
}
