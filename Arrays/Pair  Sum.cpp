#include<iostream>
#include<climits>
using namespace std;
void pair(int arr[],int n,int s)
{
	cout<<"pair of sum = "<<s<<" are "<<endl;
	int m=INT_MIN;
	for(int i=0;i<n;i++)
	{
		int j=i+1;
		while(j<n)
		{
			if(arr[i]+arr[j]==s)
			{
				if(arr[i]>arr[j])
				{
					m=arr[j];
					cout<<m<<" "<<arr[i]<<endl;
				}
				else
				{
					m=arr[i];
					cout<<m<<" "<<arr[j]<<endl;
				}
			}
			j++;
		}
	}
}
int main()
{
	int in[100],n,s;
	cout<<"enter n:";
	cin>>n;
	cout<<"enter array:";
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
	cout<<"enter a num :";
	cin>>s;
	pair(in,n,s);
}
