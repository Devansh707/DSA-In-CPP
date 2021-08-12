#include<iostream>
using namespace std;
int arrange(int arr[],int n)
{
	int s=0 ,e=n-1,val=1;
	while(s<=e)
	{
		if(val%2==1)
		{
			arr[s]=val;
			val++;
			s++;
		}
		else
		{
			arr[e]=val;
			val++;
			e--;
		}
	}
}
int main()
{
	int arr[100],n;
	cout<<"enter n:"<<endl;
	cin>>n;
	arrange(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
