#include<iostream>
using namespace std;

bool findx(int input[], int size , int x)
{
	if(size == 0)
	{
		return false;
	}
	if(input[0] == x)
	{
		return true;
	}
	bool b = findx(input+1, size-1, x);
}
int main()
{
	int a[] = {1,2,3,4,5,6,7};
	cout<<"array = ";
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bool z = findx(a, 7, 23);
	cout<<z<<endl;
	
}
