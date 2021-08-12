#include<iostream>
using namespace std;
int main()
{
	int i,j,n,c;
	cout<<"enter n:"<<endl;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		c=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				c++;
				break;
			}
		}
			if(c==0)
			{
				cout<<i<<endl;
			}
	}
}
