#include<iostream>
using namespace std;
void duplicate(int a[],int n)
{
	cout<<"duplicate elements are : ";
	int c;
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<a[i]<<endl;
		}
	}
}
int main()
{
	int s[100],n;
	cout<<"enter sixe of array : ";
	cin>>n;
	cout<<"enter array : ";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	duplicate(s,n);
}
