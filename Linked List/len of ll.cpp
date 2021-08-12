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
	cout<<"enter data until -1 "<<endl;
	int data;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data!=-1)
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
			tail = newnode;
		}
		cin>>data;
	}
	return head;
}
void print(node *head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int lengthrec(node *head)
{
	node *temp = head;
	if(temp->next==NULL)
	{
		return 1;
	}
	int n = lengthrec(temp->next);
	n++;
	return n;
}
int main()
{
	node *head = takeinput();
	print(head);
	int n = lengthrec(head);
	cout<<"length of linked list = "<<n<<endl;
}
