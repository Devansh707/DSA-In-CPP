#include<iostream>
using namespace std;
template <typename T>
class BinarytNode
{
	public:
		T data;
		BinarytNode<T>* left;
		BinarytNode<T>* right;
		
		BinarytNode(T data){
			this->data = data;
			this->left = NULL;
			this->right = NULL;
		}
		~BinarytNode(){
			delete left;
			delete right;
		}
};
