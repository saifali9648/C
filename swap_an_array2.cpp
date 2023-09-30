#include<iostream>
using namespace std;
void swaparray(int arr[],int size){
	int start=0;
	int end=size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	for(int i=0;i<size;i++){
		cout<<arr[i];
	}
}
int main(){
	int arr[100],size;
	cout<<"enter the size of array:-";
	cin>>size;
	cout<<"enter the array element:-"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	swaparray(arr,size);
return 0;
}
