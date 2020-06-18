/*
Given postorder and inorder of a tree. Create the tree and print the preorder of the tree.

Input Format
First line contains integer t as number of test cases. For each test case , it contains a number n as number of nodes of the tree and next two line contains n separated integers which is inorder and postorder of the tree.

Constraints
1<t<50 1<n<50

Output Format
Display the preorder for each test case.

Sample Input
1
8
4 8 2 5 1 6 3 7
8 4 5 2 6 7 3 1
Sample Output
1 2 4 8 5 3 6 7
*/
#include<iostream>
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

node* createTree(int post[],int in[],int start,int end,int postStart,int postEnd)
{
	if(start>end)
	{
		return NULL;
	}

	int data=post[postEnd];
	node* root=new node(data);
	if(start==end)
	{
		return root;
	}
	
	int j=-1;
	for(int i=start;i<=end;i++)
	{
		if(in[i]==data)
		{
			j=i;
			break;
		}
	}
	root->left=createTree(post,in,start,j-1,postStart,postStart+j-1-start);
	root->right=createTree(post,in,j+1,end,postStart+j-start,postEnd-1);
		return root;

}

node* builtTree(int post[],int in[],int n)
{
	return createTree(post,in,0,n-1,0,n-1);
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

int main()
{
	int testcase,n,post[100],in[100];
	cin>>testcase;
	node* root=NULL;

	while(testcase--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>in[i];
		}
		for(int j=0;j<n;j++)
		{
			cin>>post[j];
		}
		root=builtTree(post,in,n);
		preorder(root);
	cout<<endl;
	}

}