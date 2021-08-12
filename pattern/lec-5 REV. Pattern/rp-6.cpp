#include<iostream>
using namespace std;
int main()
{
	int i,j,k,c,n;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		int x=i-1;
		for(c=1;c<i;c++)
		{
			cout<<x;
			x--;
		}
		cout<<endl;
	}
}
