#include<iostream>
using namespace std;

class node
{
	public:
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
void print(node *head)
{
	cout<<"list is: "<<endl;
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
}
