#include<iostream>
using namespace std;
bool armstrong(int i)
{
int temp,sum=0,rem,pow;
	temp = i;
	while(temp>0)
	{
	rem = temp%10;
	pow = rem*rem*rem;
	sum += pow;
	temp = temp/10;
	if(sum==i)
    {
    return 1;
	}
	}
	return 0;
}
int main()
{
	cout<<"armstrong number from 1 to 500"<<endl;
	for(int i=1;i<=500;i++)
	{
		if(armstrong(i))
		{
			cout<<i<<endl;
		}
		
	}
	return 0;
}
