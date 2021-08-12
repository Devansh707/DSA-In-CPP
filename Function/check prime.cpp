#include<iostream>
using namespace std;
void prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<n<<" is not prime"<<endl;
			break;
		}
		else 
		cout<<n<<" is prime"<<endl;
		break;
	}
	
}
int main()
{
	int a;
	cout<<"enter a number:"<<endl;
	cin>>a;
	prime(a);
}
