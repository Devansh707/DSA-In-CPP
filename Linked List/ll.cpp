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
	void print(node *head)
		{
			while(head!= NULL)
			{
				cout<<head->data<<" ";
				head = head->next;
			}
			cout<<endl;
		}
int main()
{
	node n1(1);
	node *head = &n1;
	node n2(2);
	node n3(3);
	node n4(4);
	node n5(5);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	
	print (head);
	//dynamically
	node *n6 = new node (6);
	node *head2 = n6;
	node *n7 = new node (7);
	n6->next = n7; 	
	print(head2);
}
