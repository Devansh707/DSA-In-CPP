#include<iostream>
using namespace std;

int fact(int n)
{
	if(n == 0)
	{
		return 1;
	}
	int s = fact(n-1);
	int o = n*s;
}
int main()
{
	int n;
	cout<<"enter n :"<<endl;
	cin>>n;
	int o = fact(n);
	cout<<o<<endl;
}
