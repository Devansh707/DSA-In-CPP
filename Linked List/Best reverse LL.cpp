#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		
		Node (int data)
		{
			this->data = data;
			this->next = NULL;
		}
};
Node* reversebest(Node *head)
{
	if(head == NULL || head->next == NULL)
	{
		return head;
	}
	
	Node *smallans = reversebest(head->next);
	Node *tail = head->next;
	tail->next = head;
	head->next = NULL;
	return smallans;
}
Node* takeinput()
{
	cout<<"enter values till -1 "<<endl;
	int data;
	cin>>data;
	Node *head = NULL, *tail = NULL;
	while(data != -1)
	{
		Node *newnode = new Node(data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		tail->next = newnode;
		tail = newnode;
		cin>>data;
	}
	return head;
}
void print(Node *head)
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	Node *head = takeinput();
	head = reversebest(head);
	cout<<"reverae LL = ";
	print(head);
}
