#include<iostream>
using namespace std;
 class Hero{
 	public:
	char name[100];
	int health;
	char level;
};
int main(){
	Hero h1;
	cout<<"size of hero class :"<<sizeof(h1.health)<<endl;
	cout<<"size  of name :"<<sizeof(h1.name)<<endl;
	
}
