#include<iostream>
using namespace std;
int main()
{
	long n,ld,pv=1,a=0;
	
	cin>>n;
	while(n!=0)
	{
		ld=n%2;
		n=n/2;
		a=a+(ld*pv);
		pv=pv*10;
	}
	cout<<a;
}
