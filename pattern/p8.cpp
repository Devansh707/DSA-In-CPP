#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter n:"<<endl;
	cin>>n;
	int k=1;
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			cout<<k;
			k=k+1;
		}
		cout<<endl;
	}
}
