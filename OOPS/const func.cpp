#include<iostream>
using namespace std;
class fraction
{
	int numerator;
	int denominator;
	public:
		fraction()
		{
		}
		fraction (int n , int d)
		{
			this->numerator=n;
			this->denominator=d;
		}
		int getnum() const
		{
			return this->numerator;
		}
		
		int getdenom() const
		{
			return this->denominator;
		}
		
		void print() const
		{
			cout<<this->numerator<<" / "<<cout<<this->denominator;
		}
		int add(fraction f2)
		{
			int lcm=this->denominator*f2.denominator;
			int x=lcm/this->denominator;
			int y=lcm/f2.denominator;
			int num=(x*this->numerator)+(y*f2.numerator);
			this->numerator=num;
			this->denominator=lcm;
		}
		void simplify()
		{
			int gcd=1;
			int j= min(this->numerator,this->denominator);
			for(int i=1;i<=j;i++)
			{
				if(this->numerator%i==0 && this->denominator%i==0)
				{
					gcd = i;
				}
			}
			this->numerator = this->numerator/gcd;
			this->denominator = this->denominator/gcd;
		}
		void setnum(int n)
		{
			this->numerator=n;
		}
		void setdenom(int d)
		{
			this->denominator=d;
		}
};
int main()
{
	fraction f1;
	f1.setnum(5);
	f1.setdenom(7);
	fraction f2(3,8);
	f1.add(f2);
	f1.print();
	f1.simplify();
	f1.print();
}
