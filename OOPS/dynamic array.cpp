#include<iostream>
using namespace std;

class dyarray
{
	int *data;
	int ni;
	int cap;
	public:
		dyarray()
		{
			data = new int [3];
			ni=0;
			cap=3;
		}
		dyarray(dyarray const &d)
		{
			this->ni = d.ni;
			this->cap = d.cap;
			this->data = new int (d.cap);
			for(int i=0;i<ni;i++)
			{
				this->data[i] = d.data[i];
			}
		}
		dyarray operator=(dyarray const &d)
		{
			this->ni = d.ni;
			this->cap = d.cap;
			this->data = new int (d.cap);
			for(int i=0;i<ni;i++)
			{
				this->data[i] = d.data[i];
			}
		}
		void add(int element)
		{
			if(ni==cap)
			{
				int *newdata = new int (cap+1);
				for(int i=0;i<cap;i++)
				{
					newdata[i] = data[i];
				}
				delete [] data;
				data = newdata;
				cap++;
			}
			data[ni] = element;
			ni++;
		}
		void add(int i,int element)
		{
			if(i<ni)
			{
				data[i]=element;
			}
			else if(i==ni)
			{
				add(element);
			}
			else
			return;
		}
		int get(int i) const
		{
			if(i<ni)
			{
				return data[i];
			}
			else
			return -1;
		}
		void print() const
		{
			for(int i=0;i<ni;i++)
			{
				cout<<data[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	dyarray d1;
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(7);
	cout<<"d1 = ";
	d1.print();
	dyarray d2(d1);
	d1.add(2,36);
	cout<<"d2 = ";
	d2.print();
	cout<<"d1 = ";
	d1.print();
	dyarray d3;
	d3 = d1;
	d1.add(1,23);
	cout<<"d1 = ";
	d1.print();
	cout<<"d3 = ";
	d3.print();
}








