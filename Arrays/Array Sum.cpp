#include<iostream>
using namespace std;
int main()
{
	int i,a[1000],n,s=0;
	cout<<"enter n:"<<endl;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	cout<<s<<endl;
}
