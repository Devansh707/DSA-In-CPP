#include<iostream>
using namespace std;
int main()
{
	int a=0,i=1,n,c=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	while(c<n)
	{
		a=(3*i)+2;
		i++;
		if(a%4!=0)
		{
			cout<<a<<" ";
			c++;
		}
	}
}
