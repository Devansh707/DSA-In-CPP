#include<iostream>
#include "Binarytnode.h"
#include<queue>
using namespace std;

BinarytNode<int>* takeinputlevel()
{
	int rootdata;
	cout<<"enter root data"<<endl;
	cin>>rootdata;
	BinarytNode<int> *root= new BinarytNode<int> (rootdata);
	queue<BinarytNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size() != 0)
	{
		BinarytNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		int leftchild;
		cout<<"enter left child of "<<front->data<<endl;
		cin>>leftchild;
		if(leftchild != -1)
		{
			BinarytNode<int> *child = new BinarytNode<int> (leftchild);
			front->left = child;
			pendingnodes.push(child);
		}
		cout<<"enter right child of "<<front->data<<endl;
		int rightchild;
		cin>>rightchild;
		if(rightchild != -1)
		{
			BinarytNode<int> *child = new BinarytNode<int>(rightchild);
			front->right = child;
			pendingnodes.push(child);
		}		
	} 
	return root;
}

void printBTlevel(BinarytNode<int> *root)
{
	if(root == NULL)
	{
		return;
	}
	queue<BinarytNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size() != 0)
	{
		BinarytNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout<<front->data<<" : ";
		if(front->left != NULL)
		{
			cout<<"L : "<<front->left->data<<" , ";
			pendingnodes.push(front->left);
		}
		else
		{
			cout<<"L : -1 , ";
		}
		if(front->right)
		{
			cout<<"R : "<<front->right->data;
			pendingnodes.push(front->right);
		}
		else
		{
			cout<<"R : -1";
		}
		cout<<endl;
	}
}
int main()
{
	/*
	i/p = 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
	BinarytNode<int> *root = new BinarytNode<int> (1);
	BinarytNode<int> *node1 = new BinarytNode<int> (2);
	BinarytNode<int> *node2 = new BinarytNode<int> (3);
	root->left = node1;
	root->right = node2;
	*/
	BinarytNode<int> *root = takeinputlevel();
	printBTlevel(root);
}
