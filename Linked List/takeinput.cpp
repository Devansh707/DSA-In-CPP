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

node* takeinput()
{
	cout<<"enter the values : "<<endl;
	int data;
	cin>>data;
	node *head = NULL;
	while(data != -1)
	{
		node *newnode = new node(data);
		if(head == NULL)
		{
			head = newnode;
		}
		else
		{
			node *temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}
		cin>>data;
	}
	return head;
}

void print(node *head)
{
	node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}

int main()
{
	node *head = takeinput();
	print(head);
}
