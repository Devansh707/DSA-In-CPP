#include<iostream>
using namespace std;

int power(int x, int n)
{
	if(n == 0)
	{
		return 1;
	}
	int o = power(x,n-1);
	int r = x*o;
	return r;
}
int main()
{
	int i,n;
	cout<<"enter no. and exponent :"<<endl;
	cin>>i>>n;
	int o = power(i,n);
	cout<<i<<" power "<<n<<" is : "<<o<<endl;
}
