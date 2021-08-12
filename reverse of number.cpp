#include<iostream>
using namespace std;
int main()
{
	int ld,n,c=0;
	cout<<"enter a number:"<<endl;
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		c=c*10+ld;
	}
	cout<<c;
}
