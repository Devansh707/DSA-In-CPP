#include<iostream>
using namespace std;
int fact(int n)
{
	int i,a=1;
	for(i=1;i<=n;i++)
	{
		a=a*i;
	}
	return(a);
}
int main()
{
	int n,r;
	cout<<"enter n & r of ncr:"<<endl;
	cin>>n>>r;
	int fact_n=fact(n);
	int fact_r=fact(r);
	int fact_n_r=fact(n-r);
	int ncr=fact_n/(fact_r*fact_n_r);
	cout<<"ncr of "<<n<<" and "<<r<<" = "<<ncr<<endl;
}
