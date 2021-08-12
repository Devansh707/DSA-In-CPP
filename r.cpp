#include<iostream>
using namespace std;
int main()
{
	int n,ld,e=0,o=0;
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		if(ld%2==0)
		{
			e=e+ld;
		}
		else
		o=o+ld;
		n=n/10;
	}
	cout<<"even sum="<<e<<endl;
	cout<<"odd sum="<<o<<endl;
}
