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
			cout<<this->numerator<<" / "<<this->denominator<<endl;
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
		// post increment
	fraction& operator++()
	{
		this->numerator=this->numerator+this->denominator;
		simplify();
		return *this;
	}
	// pre - increment 
	fraction operator++ (int)
	{
		fraction fnew(this->numerator, this->denominator);
		this->numerator=this->numerator+this->denominator;
		fnew.simplify();
		this->simplify();
		return fnew;		
	}
	
	fraction& operator+=(fraction const &f2)
	{
			int lcm= this->denominator * f2.denominator;
			int x= lcm / this->denominator;
			int y = lcm / f2.denominator;
			int num = (x* this->numerator)  + (y * f2.numerator);
			this->numerator=num;
			this->denominator=lcm;
			this->simplify();
			
			return *this;
	}
};
int main()
{
	fraction f1(10,3);
	/*
	fraction f3=f1++;
	f3.print();
	f1.print();
	*/
	fraction f3(5,2);
	(f1+=f3)+=f3;
	f1.print();
	f3.print();
	/*
	++f1;
	f1.print();
	++(++f1);
	f1.print();
	fraction f2(8,2);
	fraction f3=++(++f2);
	f3.print();
	*/
}
