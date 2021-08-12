#include<iostream>
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
class Stack
{
	Node *head;
	int size ;
	public:
		Stack()
		{
			head = NULL;
			size = 0;
		}
		int getsize(){
			return size;
		}
		bool isempty(){
			return size == 0;
		}
		void push(int element){
			Node *newnode = new Node(element);
			newnode->next = head;
			head = newnode;
			size++;
		}
		int pop(){
			if(isempty()){
				return -1;
			}
			int ans = head->data;
			Node *temp = head;
			head = head->next;
			delete temp;
			size--;
			return ans;
		}
		int top(){
			if(isempty()){
				return -1;
			}
			return (head->data);
		}
};
