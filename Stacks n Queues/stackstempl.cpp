#include<iostream>
using namespace std;

template <typename T>
class Node{
	public:
		int data;
		Node<T> *next;
		
		Node(T data){
			this->data = data;
			next = NULL;
		}
};

template <typename T>
class Stack{
	Node<T> *head;
	int size;
	public:
		Stack(){
			head = NULL;
			size = 0;
		}
		int getsize(){
			return size;
		}
		bool isempty(){
			return (size == 0);
		}
		void push(T element){
			Node<T> *newnode = new Node<T>(element);
			newnode->next = head;
			head = newnode;
			size++;
		}
		T pop(){
			if(isempty()){
				return -1;
			}
			T ans = head->data;
			Node<T> *temp = head;
			head = head->next;
			delete temp;
			size--;
			return ans;
		}
		T top(){
			if(isempty()){
				return -1;
			}
			return (head->data);
		}
};

int main()
{
	Stack<int> s;
	s.push(36);
	s.push(23);
	s.push(66);
	s.push(22);
	
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"top = "<<s.top()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"pop = "<<s.pop()<<endl;
	cout<<"size = "<<s.getsize()<<endl;
	cout<<"is empty = "<<s.isempty()<<endl;
}
