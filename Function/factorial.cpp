#include<iostream>
using namespace std;
int factorial(int n)
{
	int i,a=1;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	return (a);
}
int main()
{
	int n;
	cout<<"enter a number to calculate factorial:"<<endl;
	cin>>n;
	int ans=factorial(n);
	cout<<"factorial of "<<n<<" = "<<ans<<endl;
}
