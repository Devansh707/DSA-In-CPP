#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			char d='A'+j-1;
			cout<<d;
		}
		cout<<endl;
	}
}
