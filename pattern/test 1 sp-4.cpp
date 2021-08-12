#include<iostream>
using namespace std;
int main()
{
	int i,j,a,x,c,k,n;
	cout<<"enter n:"<<endl;
	cin>>n;
	x=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i+1);j++)
		{
			cout<<j;
		}
		for(k=1;k<=(i-1);k++)
		{
			cout<<"*";
		}
		for(c=1;c<=(i-1);c++)
		{
			cout<<"*";
		}
		for(a=x;a>=1;a--)
		{
			cout<<a;
		}
		cout<<endl;
		x--;
	}
}
