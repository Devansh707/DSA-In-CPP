#include<iostream>
using namespace std;
int main()
{
	int n,ld,c=0,pv=1;
	cout<<"enter n:"<<endl;
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		c=c+(ld*pv);
		pv=pv*2;
	}
	cout<<c;
}
