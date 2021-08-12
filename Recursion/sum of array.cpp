#include<iostream>
using namespace std;

int sum(int input[], int n)
{
	if(n==0)
	{
		return 0;
	}
	int x = sum(input+1 , n-1);
	return input[0]+x;
}
int main()
{
	int a[] = {1,2,3,4,5};
	cout<<"array = ";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	int r = sum(a , 5);
	cout<<"\nsum = "<<r<<endl;
}
