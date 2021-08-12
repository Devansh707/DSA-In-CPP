#include<iostream>
using namespace std;

class complex
{
	int r;
	int img;	
	public:
		complex(int r,int img)
		{
			this->r=r;
			this->img=img;
		}
		
		void plus(complex const &f2)
		{
			this->r=this->r+f2.r;
			this->img=this->img+f2.img;
		}
		void print()
		{
			cout<<this->r<<" + "<<this->img<<"i"<<endl;
		}
		
		void  multiply(complex const &f2)
		{
			int x= this->r * f2.r;
       		int y= this->r * f2.img;
        	int z= this->img * f2.r;
        	int w=-(this->img * f2.img);
        	this-> r = x+w;
        	this-> img= y+z;
		}
};
int main()
{
	int r1,r2,i1,i2,n;
	cout<<"enter first 2 real part and then 2 img part of 2 complex no.:"<<endl;
	cin>>r1>>r2>>i1>>i2;
	complex c1(r1, i1);
	complex c2(r2 , i2);
	cout<<"enter choice in 1 and 2 :"<<endl;
	cin>>n;
	if(n==1)
	{
		c1.plus(c2);
		c1.print();
	}
	else if(n==2)
	{
		c1.multiply(c2);
		c1.print();
	}
	else
	return 0;
}
