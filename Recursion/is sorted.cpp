#include<iostream>
using namespace std;

bool sorted(int a[],int size)
{
	if(size == 0 || size == 1)
	{
		return true;
	}
	bool issorted = sorted(a+1 , size-1);
	if(a[0]>a[1])
	{
		return false;
	}
	else 
	{
		return true;
	}
}
int main()
{
	int a[] = {3,2,1,4,5};
	bool b = sorted(a,5);
	cout<<b<<endl;
}
