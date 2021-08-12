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
		void print()const
		{
			cout<<this->numerator<<" / "<<this->denominator;
		}
		void simplify()
		{
			int gcd=1;
			int j=min(this->numerator,this->denominator);
			for (int i=1;i<=j;i++)
			{
				if(this->numerator%i==0 && this->denominator%j==0)
				{
					gcd = i;
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
		fraction operator+(fraction &f2)const 
		{
			int lcm= this->denominator * f2.denominator;
			int x= lcm / this->denominator;
			int y = lcm / f2.denominator;
			int num = (x* this->numerator)  + (y * f2.numerator);
			/*this->numerator=num;
			this->denominator=lcm;*/
			fraction fnew(num , lcm);
			return fnew;
		}
		void multiply (fraction const &f2)
		{
			this->numerator=this->numerator*f2.numerator;
			this->denominator=this->denominator*f2.denominator;
		}
		fraction operator*(fraction &f2)const
		{
			int n=this->numerator*f2.numerator;
			int d=this->denominator*f2.denominator;
			fraction f3(n,d);
			return f3;
			f3.simplify();
		}
};
int main()
{
	fraction f1(10,3);
	fraction f2(7,2);
	fraction f3=f1+f2;
	f3.print();
	cout<<endl<<"simplified = ";
	f3.simplify();
	f3.print();
	f1.add(f2);
	cout<<endl<<"f1 : ";
	f1.print();
	cout<<endl<<"simplified = ";
	f1.simplify();
	f1.print();
	fraction f4=f1*f2;
	cout<<endl<<"f4 = ";
	f4.print();
	cout<<endl<<"simplified = ";
	f4.simplify();
	f4.print();
}
