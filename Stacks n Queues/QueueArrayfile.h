#include<iostream>
using namespace std;
template <typename T>
class Queue
{
	T *data;
	int ni;
	int fi;
	int size;
	int capacity;
	public:
		Queue(int s){
			this->data = new T[s];
			this->ni = 0;
			this->fi = -1;
			this->size = 0;
			this->capacity = s;
		}
		void enqueue(T element){
			if(size == capacity){
				cout<<"queue overflow"<<endl;
				return;
			}
			else if(ni == capacity){
				ni = 0;
				data[ni] = element;
				ni++;
				size++;
			}
			data[ni] = element;
			size++;
			ni++;
			if(fi == -1){
				fi++;
			}
		}
		T dequeue(){
			cout<<"dequeued element = ";
			if(fi == capacity){
				fi = 0;
				T ans = data[fi];
				size--;
				fi++;
				return ans;
			}
			if(size == 0){
				fi = -1;
				ni = 0;
			}
			T ans = data[fi];
			size--;
			fi++;
			return ans;
		}
		int getsize(){
			return size;
		}
		bool isempty(){
			return size==0;
		}
		T front(){
			cout<<"front = ";
			if(isempty()){
				cout<<"queue overflow"<<endl;
				return 0;
			}
			return data[fi];
		}
		void display(){
			if(size == 0){
				cout<<"Queue underflow"<<endl;
				return;
			}
			cout<<"Queue :"<<endl;
			for(int i=fi;i<capacity;i++){
				cout<<data[i]<<endl;
			}
		}
};
