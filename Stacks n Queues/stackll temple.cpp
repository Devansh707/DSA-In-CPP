#include<iostream>
using namespace std;

template<typename T>
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
class stack
{
	Node<T> *head;
	int capacity;
	public:
		stack(){
			head = NULL;
			capacity = 0;
		}
		void push(T element){
			Node<T> *newnode = new Node<T>(element);
			newnode->next = head;
			head = newnode;
			capacity++;
		}
		T pop(){
			if(head == NULL){
				cout<<"stack underflow"<<endl;
				return 0;
			}
			T ans = head->data;
			Node<T> *temp = head;
			head = head->next;
			delete temp;
			capacity--;
			return ans;
		}
		T top(){
			if(head == NULL){
				cout<<"stack underflow"<<endl;
				return 0;
			}
			return head->data;
		}
		int size(){
			return capacity;
		}
		void display(){
			cout<<"stack :"<<endl;
			Node <T> *temp = head;
			while(temp != NULL){
				cout<<temp->data<<endl;
				temp = temp->next;
			}
		}
};
