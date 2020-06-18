/*
Given a binary tree, flatten it to a linked list in-place. Refer to the sample testcase for further explanation.


Note :

The resultant linked list should be made using right pointers. All the left pointers of the nodes should be changed to NULL.
Modify only the 'flatten' function. You may add more functions as you see fit however do not change other existing code.
Your function should return the head pointer of the resultant linked list. No need to print the linked list or show any other output in your code.
Input Format
You are given a function in which you will receive the root node of the tree. No need to take any other input.

Constraints
Do not create a new linked list. All changes must be in-place.

Output Format
Return the head of the resultant linked list from the given function. Do not print anything in your code.

Sample Input
Consider a binary tree like this 
                  1
               /      \
            2           3
         /     \           \
        4       5           6
Sample Output
The resultant linked list should be like
4 -> 2 -> 5 -> 1 -> 3 -> 6 -> null .

Note that the pointers in above linked list are the right pointers. All left pointers should be changed to NULL.
Explanation
The original tree has been converted to a linked list. The flattening is inorder-wise.
*/

#include <bits/stdc++.h>
#include<stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
}; 
node * flatten(node *root)
{
        stack<node*> s;
        node* p = root;
 
        while(p != NULL || !s.empty()){
 
            if(p->right != NULL){
                s.push(p->right);
            }
 
            if(p->left != NULL){
                p->right = p->left;
                p->left = NULL;
            }
            else if(!s.empty()){
                node* temp = s.pop();
                p->right=temp;
            }
 
            p = p->right;
        }
       return p;
}

void printLinkedList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->left != NULL)
        {
            cout << "Left pointer for node with data=" << temp->data << " is changed to NULL" << endl;
        }
        cout << temp->data << " ";
        temp = temp->right;
    }
}


node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int main()
{
    node *root = buildTree();

    node *head = flatten(root);

    printLinkedList(head);

    return 0;
}