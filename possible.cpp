#include<bits/stdc++.h> 
using namespace std; 
int main() 
{	 
	string n; 
	cin >> n; 
	sort(n.begin(),n.end()); 
	 
	do 
	{ 
		cout << n << endl; 
	} 
	while(next_permutation(n.begin(),n.end())); 
	 
	return 0; 
} 
