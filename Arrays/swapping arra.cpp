#include<iostream>
using namespace std;
void swap(int a[],int n)
{
	int i=0;
	if(n%2==1)
	{
		n--;
	}
	while(i<n)
	{
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i=i+2;
	}
}
int main()
{
	int a[100],n;
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"enter elements of array :";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<"array after swapping elements :";
	swap(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
