/*
Given postorder and inorder traversal of a tree. Create the original tree on given information.

Input Format
Enter the size of the postorder array N then add N more elements and store in the array, then enter the size of the inorder array M and add M more elements and store in the array. here M and N are same.

Constraints
None

Output Format
Display the tree using the display function

Sample Input
3
1
3
2
3
1
2
3
Sample Output
1 => 2 <= 3
END => 1 <= END
END => 3 <= END
*/
#include<iostream>
using namespace std;

class node
{public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=right=NULL;
	}
};

node* createTree(int post[],int in[],int start,int end,int poststart,int postEnd)
{
	if(start>end)
	{
		return NULL;;
	}

	int data=post[postEnd];
	node* root=new node(data);
	if(start==end) return root;
	int j=-1;
	for(int i=start;i<=end;i++)
	{
		if(in[i]==data)
		{
			j=i;
			break;
		}
	}
	root->left=createTree(post,in,start,j-1,poststart,poststart+j-1-start);
	root->right=createTree(post,in,j+1,end,poststart+j-start,postEnd-1);
	return root;
}

node* built(int pos[],int in[],int n)
{
	//int index=n-1;
	return createTree(pos,in,0,n-1,0,n-1);
}

void preorder(node* root)
{
	if(root==NULL)return;
	(root->left==NULL ? cout<<"END" : cout<<root->left->data);
	cout<<" => ";
	cout<<root->data;
	cout<<" <= ";
	(root->right==NULL ? cout<<"END" :cout<<root->right->data);
	cout<<endl;
	preorder(root->left);
	preorder(root->right);
	
}

int main()
{
	int post[10001],in[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>post[i];
	}
	int m;
	cin>>m;
	for(int j=0;j<m;j++)
	{
		cin>>in[j];
	}

	node* root=NULL;
	root=built(post,in,n);
	preorder(root);
	return 0;
}