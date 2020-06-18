/*
Reverse a linked list by changing the data of its nodes in a recursive manner

Input Format
N -> number of nodes N spaces separated numbers -> content of linked list

Constraints
None

Output Format
N space separated numbers -> content of reversed linked list

Sample Input
5
10 20 30 40 50
Sample Output
50 40 30 20 10
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

void insert_back(node* &head,node* &tail,int data)
{
	if(head==NULL)
	{
		head=tail=new node(data);
	}
	else
	{
		node* n=new node(data);
		tail->next=n;
		tail=n;
	}
}


node* reverse_list(node* &head,node* &tail)
{
	node* p=NULL;
	node* c=head;
	while(c)
	{
		node* next=c->next;
		c->next=p;
		p=c;
		c=next;
	}
	tail=head;
	head=p;
	
}

void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
	head=head->next;
	}

}

int main() {

	int test, value;
	cin>>test;
	
	node* head=NULL;
	node* tail=NULL;

	for(int i=0;i<test;i++)
	{
		cin>>value;
		insert_back(head,tail,value);
	}
	reverse_list(head,tail);
	print(head);
}