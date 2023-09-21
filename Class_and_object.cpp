#include<iostream>
using namespace std;
//class declaration
 class Hero{
 	//properties
 	public: //access modifier
	char name[100];
	int health;
	char level;
};
int main(){
	//creation of object
	Hero h1;
	h1.health=80;
	h1.level='A';
	cout<<"health is: "<<h1.health<<endl;
	cout<<"leve of h1: "<<h1.level<<endl;
	
}
