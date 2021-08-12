#include<iostream>
using namespace std;
int main()
{
	int k,i,l,j,n;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
		}
		for(l=(i-1);l>=1;l--)
		{
			cout<<l;
		}
		cout<<endl;
	}
} 
