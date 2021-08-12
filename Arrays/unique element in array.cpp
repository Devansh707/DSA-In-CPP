#include<iostream>
using namespace std;
void unique(int a[],int n)
{
	int c=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		if(c==1)
		{
			cout<<"unique element : "<<a[i];
		}
	}
}
int main()
{
	int s[100],n;
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter array : ";
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	unique(s,n);
}
