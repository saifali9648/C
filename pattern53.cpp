#include<iostream>
using namespace std;
int main(){
	for(int a=5;a>=1;a--){
		for(int b=1;b<a;b++){
			cout<<" ";
		}
		for(int c=a;c<=5;c++){
			cout<<c;
		}
		cout<<endl;
	}
	return 0;
}
