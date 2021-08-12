#include<iostream>
using namespace std;
int main()
{
	int c,s,e,w;
	cin>>s>>e>>w;
	while(s<=e)
	{
		c=(s-32)*(5.0/9.0);
		cout<<s<<"\t" <<c<<endl;
		s=s+w;
		
	}
}
