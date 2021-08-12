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
class Pair
{
	public:
		Node *head;
		Node *tail;
};
Node *takeinputbetter ()
{
	cout<<"enter data till -1 "<<endl;
	int data;
	cin>>data;
	Node *head = NULL , *tail = NULL;
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

Pair reversellbetter(Node *head)
{
	if(head == NULL || head->next == NULL)
	{
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}
	Pair smallans = reversellbetter(head->next);
	smallans.tail->next = head;
	head->next = NULL;
	
	Pair ans;
	ans.head = smallans.head;
	ans.tail = head;
	return ans;
}

Node* reversell2(Node *head)
{
	return reversellbetter(head).head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main()
{
	Node *head = takeinputbetter();
	head = reversell2(head);
	cout<<"reverse LL = ";
	print(head);
}
