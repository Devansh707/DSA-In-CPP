#include<iostream>
using namespace std;
int main()
{
	int x,i,c=0;
	cout<<"enter the limit:"<<endl;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		if(i%2==0)
		{
			c=c+i;
		}
	}
	cout<<c<<endl;
	
}
