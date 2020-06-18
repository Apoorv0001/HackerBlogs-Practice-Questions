/*
Given a linked list with n nodes. Find the kth element from last without computing the length of the linked list.

Input Format
First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.

Constraints
n < 10^5

Output Format
Output a single line containing the node value at the kth element from last.

Sample Input
1 2 3 4 5 6 -1
3
Sample Output
4
Explanation
The linked list is 1 2 3 4 5 6. -1 is not included in the list. So the third element from the last is 4
*/

#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;

	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void  insert_back(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail=new node(data);
	}
	else
	{
		node* newnode=new node(data);
		tail->next=newnode;
		tail=newnode;
	}
}

int length(node* head)
{
	int count=0;
	while(head)
	{
		count++;
		head=head->next;
	}
	return count-1;
}
void finding(node* head,node* tail,int pos)
{
	if(head==NULL)
	{
		return ;
	}
	int len=length(head);
	node* temp=head;

	int key=len-pos;
	int count =1;
	while(count<=key)
	{
		temp=temp->next;
		//cout<<temp->data<<endl;
		count++;
	}
	cout<<temp->data;
}
void print(node* head)
{
    while(head)
    {
        cout<<head->data<< " ";
    head=head->next;
    }
    cout<<endl;
}
int main() {
	int value,pos;
	node* head=NULL;
	node* tail=NULL;

	do
	{
		cin>>value;
		insert_back(head,tail,value);
	}
	while(value>-1);
	cin>>pos;
	finding(head,tail,pos);
	return 0;
}