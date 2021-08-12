#include<iostream>
using namespace std;

class fraction
{
	int numerator;
	int denominator;
	
	public:
		fraction(int numerator , int denominator)
		{
			this->numerator=numerator;
			this->denominator=denominator;
		}
		void printf() const
		{
			cout<<this->numerator<<" / "<<this->denominator<<endl;
		}
		
		void simplify ()
		{
			int gcd=1;
			int j=min( this->numerator,this->denominator);
			for(int i=1;i<j;i++)
			{
				if(this->numerator%i==0 && this->denominator % i==0)
				{
					gcd=i;
				}
			}
			this->numerator=this->numerator/gcd;
			this->denominator=this->denominator/gcd; 
		}
		void add(fraction const &f2)
		{
			int lcm= this->denominator * f2.denominator;
			int x= lcm / this->denominator;
			int y = lcm / f2.denominator;
			int num = (x* this->numerator)  + (y * f2.numerator);
			this->numerator=num;
			this->denominator=lcm;
		}
		
		void multiply (fraction const &f2)
		{
			this->numerator=this->numerator*f2.numerator;
			this->denominator=this->denominator*f2.denominator;
		}
};
int main()
{
	fraction f1(10 , 2);
	fraction f2 (36 , 2);
	f1.add(f2);
	f1.printf();
	f2.printf();
	f1.simplify();
	f1.printf();
	f1.multiply(f2);
	f1.printf();
	f1.simplify();
	f1.printf();
	f2.printf();
}
