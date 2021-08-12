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
			data = new T[s];
			this->ni = 0;
			this->fi = -1;
			this->size = 0;
			this->capacity = s;
		}
		int getsize(){
			cout<<"size = ";
			return size;
		}
		bool isempty(){
			return size==0;
		}
		void enqueue(T element){
			if(size == capacity){
				T *newdata = new T[2 * capacity];
				int j = 0;
				for(int i=this->fi ; i<this->capacity;i++){
					newdata[j] = data[i];
					j++;
				}
				for(int i=0;i<fi;i++){
					newdata[j] = data[i];
					j++;
				}
				delete []data;
				data = newdata;
				capacity *= 2;
				fi = 0;
				ni = capacity;
			//	cout<<"Queue is full"<<endl;
			//	return;
			}
			data[ni] = element;
			ni = (ni + 1) % capacity;
			size++;
			if(fi == -1){
				fi = 0;
			}
		}
		T front(){
			if(isempty()){
				cout<<"queue is empty"<<endl;
				return 0;
			}
			cout<<"front element = ";
			return data[fi];
		}
		T dequeue(){
			if(isempty()){
				cout<<"queue is empty"<<endl;
				return 0;
			}
			cout<<"dequeued element = ";
			T ans = data[fi];
			fi = (fi + 1)% capacity;
			size--;
			if(size == 0){
				fi = -1;
				ni = 0;
			}
			return ans;
		}
		void display(){
			if(isempty()){
				cout<<"queue underflow"<<endl;
				return;
			}
			if(ni >= fi){
				for(int i=fi;i<=ni;i++){
					cout<<data[i]<<endl;
				}
			}
			else{
				for(int i=fi;i<capacity;i++){
					cout<<data[i]<<endl;
				}
				for(int i=0;i<=ni;i++){
					cout<<data[i]<<endl;
				}
			}
		}
		int i(){
			cout<<"first index = ";
			return fi;
		}
		int nextind(){
			cout<<"next index = ";
			return ni;
		}
};
