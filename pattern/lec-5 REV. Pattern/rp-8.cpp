#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a,n;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		int c=i;
		for(j=1;j<=i;j++)
		{
			cout<<c;
			c++;
		}
		int f=(2*i)-2;
		for(a=1;a<=i-1;a++)
		{
			cout<<f;
			f--;
		}
		cout<<endl;
	}
	
}
