#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		char d;
		for(j=1;j<=i;j++)
		{
			d='A'+i-1+(j-1);
				cout<<d;
		}
		cout<<endl;
	}
}

