#include<iostream>
using namespace std;
int main()
{
	int i,n,j,k;
	cout<<"enter n:"<<endl;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		char d;
		k='A'+i-1;
		d=k;
		for(j=1;j<=i;j++)
		{
			cout<<d;			
		}
		cout<<endl;
	}
}
