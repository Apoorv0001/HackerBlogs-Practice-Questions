/*
Given a binary tree. Print the level order traversal, make sure each level start at a new line.

Input Format
Enter the values of all the nodes in the binary tree in pre-order format where true suggest the node exists and false suggests it is NULL

Constraints
None

Output Format
Print the level order in which the different levels are in different lines, all the values should be in a space separated manner

Sample Input
10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
Sample Output
10 
20 30 
40 50 60 73
*/
#include<iostream>
#include<queue>
using namespace std;

class node
{
	public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=right=NULL;
	}
};

node* createTree()
{
	int data;
	cin>>data;
	if(data==-1)
	{
		return NULL;
	}
	
	node* root=new node(data);
	
	string l;
	cin>>l;
	if(l=="true"){
	
	root->left=createTree();
}

	string r;
	cin>>r;
	if(r=="true")
	{
	root->right=createTree();
}

	return root;
}

void levelOrder(node* root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node* ans=q.front();
		q.pop();
		if(ans==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<ans->data<<" ";
			if(ans->left)
			{
				q.push(ans->left);
			}
			if(ans->right)
			{
				q.push(ans->right);
			}
		}
	}
}
int main() {
	node* root=NULL;
	root=createTree();
	levelOrder(root);
	return 0;
}