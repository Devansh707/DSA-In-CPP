#include<iostream>
using namespace std;

int nod(int n)
{
	int c=0;
	if(n == 0)
	{
		return c;
	}
	int s = nod(n/10);
	int r = s+1;
	return r;
}
int main()
{
	int n;
	cout<<"enter n : "<<endl;
	cin>>n;
	int r = nod(n);
	cout<<"no. of digits = "<<r<<endl;
}
