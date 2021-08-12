#include<iostream>
using namespace std;
int main()
{
	int c,i,x=1,a=0,n;
	cout<<"enter n and choice:"<<endl;
	cin>>n>>c;
	if(c==1)
	{
		for(i=1;i<=n;i++)
		{
			a=a+i;
		}
		cout<<a;
	}
	else if(c==2)
	{
		for(i=1;i<=n;i++)
		{
			x=x*i;
		}
		cout<<x;
	}
	else
	{
		cout<<"-1";
	}
}
