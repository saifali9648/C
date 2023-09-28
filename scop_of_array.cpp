#include<iostream>
using namespace std;
void update(int arr[],int size){
	arr[0]=120; //agar array ke elements ko function meain update kar diya jaye tho "main" function me bhi array ka elements change ho jayega
	cout<<"inside the function"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<" "<<arr[i];
	}
	cout<<endl;
	cout<<"going back to main"<<endl;
}
int main(){
	int arr[3]={1,2,4};
	update(arr,3);
	for(int i=0;i<3;i++){
		cout<<" "<<arr[i];
	}
	return 0;
}
