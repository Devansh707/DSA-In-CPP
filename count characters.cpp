#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0,x=0;
	char c;
	c=cin.get();
	while(c!='$')
	{
		if(c>='a'&& c<='z')
		{
			a++;			
		}
		else if(c>='0' && c<='9')
		{
			b++;
		}
		else
		{
			x++;
		}
		c=cin.get();
	}
	cout<<a<<" "<<b<<" "<<x<<endl;
}
