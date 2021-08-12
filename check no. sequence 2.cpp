#include<iostream>
using namespace std;
int main()
{
	int d=0, f=0, c=0;
	int n,x,y;
	cout<<"enter the number of input:";
	cin>>n;
	cout<<"enter the first value:";
	cin>>x;
	for(int i=1;i<n;i++)
	{
		cout<<"enter next value:";
		cin>>y;
		if(x<y && d<2)
		{
			x=y;
			y=0;
			f=1;
			if(c==2)
			{
				d++;
				c=1;
			}
			else
			{
				c=1;
			}
			continue;
		}
		if(x>y &&d<2)
		{
			x=y;
			f=1;
			if(c==1)
			{
				d++;
				c=2;
			}
			else
			{
				c=2;
			}
			continue;
		}
		if(x==y)
		{
			f=0;
			break;
		}
	}
	if(d==2)
	{
		f=0;
	}
	if(f==1)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
