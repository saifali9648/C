#include<iostream>
using namespace std;
bool linear(int arr[],int size,int e){
	for(int i=0;i<size;i++){
		if(arr[i]==e){
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[100],size,e;
	cout<<"enter the size of array:-"<<endl;
	cin>>size;
	cout<<"enter the elements of array:- "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<"enter the element that you wnat to check :-"<<endl;
	cin>>e;
	if(linear(arr,size,e))
	{
		cout<<e<<" is present";
	}
	else{
		cout<<"element is not present";
	}
return 0;
}
