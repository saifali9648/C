#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n<=1){
		cout<<"enter greater number than 1"<<endl;
	}
	else{
		for(int i=2;i<n;i++){
			if(n%2==0){
				return 0;
			}
			return 1;
		}
	}
}
int main(){
	int n;
	cout<<"enter a number that you want to check number is prime or not prime"<<endl;
	cin>>n;
	//isPrime(n);
	if(isPrime(n)){
		cout<<"prime no"<<endl;
	}
	else{
		cout<<"not prime"<<endl;
	}
	return 0;
}
