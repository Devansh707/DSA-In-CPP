#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			char d='A'+n-k;
			cout<<d;
			k--;
		}
		cout<<endl;
	}
}
