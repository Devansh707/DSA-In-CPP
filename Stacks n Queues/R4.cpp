#include<iostream>
using namespace std;
template<typename T>
class stackarr
{
	T *data;
	int ni;
	int capacity;
	
	public:
		stackarr(){
			data = new T [4];
			this->ni = 0;
			capacity = 4;
		}
		
		int size()
		{
			return (ni);
		}
		bool ise(){
			return (ni==0);
		}
		void push(T element){
			if(ni == capacity){
				T *newdata = new T [2*capacity];
				for(int i = 0;i<capacity ; i++)
				{
					newdata [i] = data[i];
				}
				data = newdata;
				delete [] data;
				capacity *= 2;
			}
			data[ni] = element;
			ni++;
		}
		T pop(){
			if(ni == 0)
			{
				cout<<"stack is empty"<<endl;
				return 0;
			}
			ni--;
			return data[ni];
		}
		T top()
		{
			if(ni == 0)
			{
				cout<<"stack is empty"<<endl;
				return 0;
			}
			return data[ni - 1];
		}
};

