#include<iostream>
#include<queue>
#include "TreeNode.h"
using namespace std;
TreeNode<int>* takeinputlevel()
{
	int rootdata;
	cout<<"enter root data"<<endl;
	cin>>rootdata;
	TreeNode<int> *root = new TreeNode<int>(rootdata);
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size() != 0)
	{
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout<<"enter num of children of "<<front->data<<endl;
		int numchild;
		cin>>numchild;
		for(int i=0;i<numchild;i++)
		{
			cout<<"enter "<<i+1<<"th child"<<endl;
			int childData;
			cin>>childData;
			TreeNode<int> *child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingnodes.push(child);
		}
	}
	return root;
}
void printlevel(TreeNode<int> *root)
{
	queue<TreeNode<int>*> q;
	q.push(root);
	while(q.size() != 0)
	{
		TreeNode<int> *front = q.front();
		q.pop();
		cout<<front->data<<":";
		for(int i=0;i<front->children.size();i++)
		{
			if(i == front->children.size() - 1)
			{
				cout<<front->children[i]->data;
				q.push(front->children[i]);
			}
			else
			{
				cout<<front->children[i]->data<<",";
				q.push(front->children[i]);
			}
		}
		cout<<endl;
	}	
}
int main()
{
	TreeNode<int> *root = takeinputlevel();
	printlevel(root);
}
