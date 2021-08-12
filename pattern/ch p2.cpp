#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		char d='A'+i-1;
		for(j=1;j<=n;j++)
		{
			char c=d+j-1;
			cout<<c;
		}
		cout<<endl;
	}
}
