#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter n:"<<endl;
	cin>>n;
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
}
