// MAXIMUM IN A BINARY TREE

#include<bits/stdc++.h>
using namespace std;

class Node{
	
	public:
		int data;
		Node *left, *right;
		
		
	Node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

int findMax(Node *root){
	if(root==NULL){
		return INT_MIN;
	}
	
	int res=root->data;
	int lmax=findMax(root->left);
	int rmax=findMax(root->right);
	
	if(rmax>res)res=rmax;
	if(lmax>res)res=lmax;
	
	
	return res;
}

int main(){
	Node *root=new Node(1);
	root->left=new Node(4);
	root->right=new Node(6);
	root->left->left=new Node(3);
	root->left->right=new Node(2);
	root->right->left=new Node(10);
	root->right->right=new Node(7);
	
	cout<<"Maximum element is :"<<findMax(root)<<" ";
	return 0;
	
}
