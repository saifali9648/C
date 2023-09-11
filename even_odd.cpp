#include<iostream>
using namespace std;
void evenOdd(int n){
	if(n%2==0){
		cout<<n<<"evern number"<<endl;
	}
	else{
		cout<<n<<"is odd number"<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	evenOdd(n);
	return 0;
}
