#include<iostream>
using namespace std;
int linear(int arr[],int n,int val)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			return(i);
		}
	}
	return(-1);
}
int main()
{
	int arr[1000],n,val;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	} 
	cout<<"enter the element to be found:"<<endl;
	cin>>val;
	int ans=linear(arr,n ,val);
	cout<<ans<<endl;
}
