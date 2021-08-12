#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node(int data){
			this->data = data;
			next = NULL;
		}
};
class stackll
{
	Node *head;
	int capacity;
	public:
		stackll(){
			this->head = NULL;
			capacity = 0;
		}
		void push(int element){
			Node *newnode = new Node(element);
			newnode->next = head;
			head = newnode;
			capacity++;
		}
		int pop(){
			if(head == NULL){
				cout<<"stack is empty"<<endl;
				return 0;
			}
			int ans = head->data;
			Node *temp = head;
			head = head->next;
			delete temp;
			capacity--;
			return ans;
		}
		int top(){
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
			cout<<"Stack is :"<<endl;
			Node *temp = head;
			while(temp != NULL){
					cout<<temp->data<<endl;
					temp = temp->next;
			}
		}
};

















