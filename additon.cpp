#include<iostream>
using namespace std;
int main()
{
	int n,i,sum;
	cout<<"enter a that you how much no wnt to add"<<endl;
	cin>>n;
	float k;
	sum=0;
	for(i=0;i<=n-1;i++)
	{
	cout<<"enter no that you wnt to add"<<endl;
	cin>>k;
	sum=sum+k;
    }
    cout<<"addition of ginven no is"<<sum<<endl;
    float avg;
    avg=sum/n;
    cout<<"average of additon no is"<<avg; 
    return 0;
}
