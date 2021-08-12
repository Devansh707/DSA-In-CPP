#include<iostream>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			
			break;
		}
		else
		{
			return (n);
		}
	}
}
int main()
{
	int n;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(prime(i));
		{
			cout<<i<<endl;
		}
	}
}
