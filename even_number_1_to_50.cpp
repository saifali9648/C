#include<iostream>
using namespace std;
void even(int size){
	for(int i=1;i<=size;i++){
		if(i%2==0){
			cout<<i<<endl;
		}
	}
}
int main(){
	int size;
	cout<<"enter the value that where you wnat to print even number:-"<<endl;
	cin>>size;
	even(size);
return 0;
}
