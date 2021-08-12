#include<iostream>
using namespace std;
int main()
{
	int i,n,f,s,t=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	f=1;
	s=1;
	if(n==1)
	cout<<f;
	else
	{
		for(i=2;i<n;i++)
		{
			t=f+s;
			f=s;
			s=t;
		}
		cout<<t;
	}
}
