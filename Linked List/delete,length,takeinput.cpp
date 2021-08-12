#include<iostream>
using namespace std;


class Node
{
	public:
		int data;
		Node *next;
		
		Node(int data)
		{
			this->data = data;
			this->next = NULL;
		}
};
Node *takeinput();
void print (Node *head);
Node *insertnode(Node *head,int i,int data);
int length(Node *head);


Node *takeinput()
{
	cout<<"Enter values of linked list untill -1 : "<<endl;
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data !=-1)
	{
		Node *newnode = new Node(data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}

void print (Node *head)
{
	cout<<"linkd list is : "<<endl;
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

Node *insertnode(Node *head,int i,int data)
{
	if(head == NULL)
	{
		return NULL;
	}
	if(i == 0)
	{
		Node *newnode = new Node(data);
		newnode->next = head;
		head = newnode;
		return head;
	}
	Node *x = insertnode(head->next, i-1 , data);
	head->next = x;
	return head;
}

int length(Node *head)
{
	Node *temp = head;
	if(temp->next == NULL)
	{
		return 1;
	}
	int n = length(temp->next);
	n++;
	return n;
}

Node *deletenoderec(Node *head , int i)
{
	if(head == NULL)
	{
		return NULL;
	}
	if(i == 0)
	{
		Node *a = head;
		head = head->next;
		delete a;
		return head;
	}
	Node *x = deletenoderec(head->next , i-1);
	head->next = x;
	return head;
}

int main()
{
	Node *head = takeinput();
	int i,data;
	cout<<"enter pos and data which is inserted at linked list : "<<endl;
	cin>>i>>data;
	head = insertnode(head , i,data);
	print(head);
	int l = length(head);
	cout<<"length of linked list = "<<l<<endl;
	int d;
	cout<<"enter node which is to be deleted : "<<endl;
	cin>>d;
	head = deletenoderec(head , d);
	print(head);
	l = length(head);
	cout<<"length of linked list = "<<l<<endl;
}
