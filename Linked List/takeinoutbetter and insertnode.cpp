#include<iostream>
using namespace std;

class node
{
	public :
	int data;
	node *next;
	
	node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

node* takeinputbetter()
{
	int data;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data != -1)
	{
		node *newnode = new node(data);
		if(head == NULL)
		{
			head = newnode;
			tail = newnode;	
		}
		else
		{
			tail->next = newnode;
			tail = tail->next;
			//or
			// tail = newnode;			
		}
		cin>>data;
	}
	return head;
}
node* insertnode(node *head , int i, int data)
{
	node *newnode = new node(data);
	int count = 0;
	node *temp = head;
	if(i == 0)
	{
		newnode->next = head;
		head = newnode;
		return head;
	}
	while(temp != NULL && count < i-1)
	{
		temp = temp->next;
		count++;
	}
	if(temp!= NULL)
	{
		newnode->next = temp->next;
		temp->next = newnode;
		/* or
		node *a = temp->next;
		temp->next = newnode;
		newnode->next = a;
		*/
	}
	return head;
}
void print(node *head)
{
	node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main()
{
	cout<<"enter values of data of linked list :"<<endl;
	node *head = takeinputbetter();
	print(head);
	int i,data;
	cout<<"enter index and value of data :"<<endl;
	cin>>i>>data;
	head = insertnode(head , i, data);
	cout<<"new list : ";
	print(head);	
}
