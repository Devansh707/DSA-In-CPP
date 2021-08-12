#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=arr[i],minindex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				minindex=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
int main()
{
	int input[100],n;
	cout<<"enter size of array:";
	cin>>n;
	cout<<"enter random elements of array :";
	for (int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	selectionsort(input,n);
	cout<<"array after sorting ="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<input[i]<<endl;;
	}
}
