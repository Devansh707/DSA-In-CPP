#include<iostream>
using namespace std;

template <typename T>
class Stack
{
	T *data;
	int nextindex;
	int capacity;
	public:
		Stack()
		{
			data = new T[4];
			nextindex = 0;
			capacity = 4;
		}
		int size()
		{
			return nextindex;
		}
		bool isempty()
		{
			return nextindex == 0;
		}
		void push(T element)
		{
			if(nextindex == capacity)
			{
				T *newdata = new T(2*capacity);
				for(int i=0;i<capacity;i++)
				{
					newdata[i] = data[i];
				}
				capacity = capacity*2;
				delete [] data;
				data = newdata;
			}
			data[nextindex] = element;
			nextindex++;
		}	
		T pop()
		{
			if(isempty())
			{
				cout<<"stack is empty"<<endl;
				return 0;
			}
			nextindex--;
			return data[nextindex];
		}
		T top()
		{
			if(isempty())
			{
				cout<<"stack is empty"<<endl;
				return 0;
			}
			return data[nextindex - 1];
		}

};
int main()
{
	Stack<int> s;
	s.push(22);
	s.push(23);
	s.push(36);
	s.push(66);
	s.push(236);
	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
}
