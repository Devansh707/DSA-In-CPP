#include<iostream>
#include<climits>
using namespace std;

class stackarr
{
	int *data;
	int nextindex;
	int capacity;
	
	public:
		stackarr(int totalsize)
		{
			data = new int [totalsize];
			nextindex = 0;
			capacity = totalsize;
		}
		int size()
		{
			return nextindex;
		}
		bool isempty()
		{
			return nextindex == 0;
		}
		void push(int element)
		{
			if(nextindex == capacity)
			{
				cout<<"stack overflow"<<endl;
				return ;
			}
			data[nextindex] = element;
			nextindex++; 
		}
		int pop()
		{
			if(isempty())
			{
				cout<<"stack is empty"<<endl;
				return INT_MIN;
			}
			nextindex--;
			return data[nextindex];
		}
		int top()
		{
			if(isempty())
			{
				cout<<"stack is empty"<<endl;
				return INT_MIN;
			}
			return data[nextindex - 1];
		}
};

int main()
{
	stackarr s(4);
	s.push(22);
	s.push(23);
	s.push(36);
	s.push(66);
	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
}

