#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double b,ts,hra,da,al,pf,r;
	char g;
	cin>>b>>g;
	hra=0.2*b;
	da=0.5*b;
	pf=0.11*b;
	if(g=='A')
	{
		al=1700;
	}
	else if(g=='B')
	{
		al=1500;
	}
	else
	{
		al=1300;
	}
	ts=(b+hra+da+al)-pf;
	r=round(ts);
	cout<<r<<endl;
}
