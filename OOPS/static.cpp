#include<iostream>
using namespace std;

class student 
{
	public:
	static int totals;
		int age;
		int roll;
		
		student()
		{
			totals++;
		}
		static int gettotals()
		{
			return totals;
		}
		
	
};
int student :: totals=0;
int main()
{
	student s1,s3;
	student s2,s4,s5;
	cout<<student :: totals<<endl;
}
