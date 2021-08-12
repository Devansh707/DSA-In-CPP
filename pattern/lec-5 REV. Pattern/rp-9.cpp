#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,g,n,n1,n2;
	cout<<"enter n:"<<endl;
	cin>>n;
	n1=(n+1)/2;
	n2=n1-1;
	for(i=1;i<=n1;i++)
	{
		for(k=1;k<=n1-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n2;i>=1;i--)
	{
		for(k=1;k<=(n2-i)+1;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
