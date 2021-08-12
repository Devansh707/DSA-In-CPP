#include<iostream>
using namespace std;
void print (int input[],int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<input[i];
	}
	cout<<endl;
}
void reverse(int input[],int n)
{
	int i=0,j=n-1;
	while(i<j)
	{
		int temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i++;
		j--;
	}
}
int main()
{
	int b[100],n;
	cout<<"enter n:"<<endl;
	cin>>n;
	cout<<"enter array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	cout<<"original array: ";
	print(b,5);
	cout<<"reverse array: ";
	reverse(b,5);
	print(b,5);
}
