#include<iostream>
using namespace std;
int main()
{
	int i,n,c=1;
	cout<<"enter n:"<<endl;
	cin>>n;
	if(n==0)
	cout<<"0";
	else
	{
		for(i=1;c<=n;i++)
		{
			c=i*i;
			if(n==c)
			{	
				break;
			}
			else if(n<c)
			{
				i--;
				break;
			}
		}
		cout<<i;
	}
}
