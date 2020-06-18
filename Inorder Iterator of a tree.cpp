/*
Implement an iterator for a tree. Your iterator will be initialised with the root of the tree.

Your iterator has three functions :

Constructor - which obtains the root of the tree as an argument.
hasNext() - function which returns boolean type denoting whether or not there are any further elements left in the inorder traversal of the tree.
next() - function which returns int denoting the next element in the inorder tree traversal of the tree.
Note:

next() and hasNext() should run in average O(1) time and uses O(h) memory, where h is the height of the tree.
You may assume that next() call will always be valid, that is, there will be at least a next smallest number in the BST when next() is called.
Input Format
You have to write the definition for TreeIterator class. Do not change/alter any of the remaining code.

Constraints
1 <= No of nodes <= 10^5

Output Format
Your iterator should work as desired and should be able to print the inorder traversal of the tree.

Sample Input
Suppose your tree looks like
                  1
               /      \
            2           3
         /     \           \
       4       5             6

Your iterator should first return 4 from the next() function. Then if called again , it should return 2 and then 5 and so on. 
Sample Output
For the above tree , if the next() is called continuously until hasNext() returns false , the output would be 
4 2 5 1 3 6
Explanation
Initialisation -
Java : TreeIterator iterator = new TreeIterator(root);
C++ : TreeIterator iterator(root) ;
Python : iterator = TreeIterator(root) ;

Calling :-
iterator.next(); // return 4
iterator.next(); // return 2
iterator.hasNext(); // return true
iterator.next(); // return 5
iterator.hasNext(); // return true
iterator.next(); // return 1
iterator.hasNext(); // return true
iterator.next(); // return 3
iterator.next(); // return 6
iterator.hasNext(); // return false
*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

class TreeIterator
{
       void inorder(Node* root)
        {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }
public:
        vector<int> v;
        int i;
    TreeIterator(Node *root)
    {
     i=0;
     inorder(root);
    }

    /** @return the next smallest number */
    int next()
    {
       return v[i++];
    }

    /** @return whether we have a next smallest number */
    bool hasNext()
    {
        return i<v.size();
    }
};

Node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int main()
{
    Node *root = buildTree();

    TreeIterator t(root);
    int c = 0;

    while (t.hasNext())
    {
        if (c / 10 % 2 == 1)
        {
            cout << t.hasNext() << " ";
        }
        if (c % 7 == 0)
        {
            cout << "^ ";
        }
        cout << t.next() << " ";
        c++;
    }

    return 0;
}