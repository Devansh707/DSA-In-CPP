#include<iostream>
using namespace std;
template <typename T>
class Node{
	public:
	T data;
	Node<T> *next;
	
	Node(T data){
		this->data = data;
		next = NULL;
	}
};
template <typename T>
class Queue
{
	Node<T> *head;
	Node<T> *tail;
	int size;
	public:
		Queue(){
			head = NULL;
			tail = NULL;
			size = 0;
		}
		void enqueue(T element){
			Node<T> *newnode = new Node<T>(element);
			if(head == NULL){
				head= newnode;
				tail = newnode;
			}
			else{
				tail->next = newnode;
				tail = newnode;
			}
			size++;
		}
		T dequeue(){
			if(head == NULL){
				cout<<"queue undeflow"<<endl;
				return 0;
			}
			cout<<"Dequeued element = ";
			T ans = head->data;
			Node<T> *temp = head;
			head = head->next;
			delete temp;
			size--;
			return ans;
		}
		T front(){
			if(head == NULL){
				cout<<"queue underflow"<<endl;
				return 0;
			}
			cout<<"front = ";
			return head->data;
		}
		bool isempty(){
			cout<<"empty = ";
			return size==0;
		}
		int getsize(){
			cout<<"size = ";
			return size;
		}	
		void display(){
			if(head == NULL){
				cout<<"Queue is empty"<<endl;
				return;
			}
			cout<<"Queue = "<<endl;
			Node<T> *temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
};
