/*
Given two numbers represented by two linked lists, write a program that prints the sum list. The sum list is linked list representation of addition of two input numbers in linked lists. It is not allowed to modify the lists. Also, not allowed to use explicit extra space (Use Recursion).

Input Format
First line contains N,M, number of nodes in the 1st and 2nd list.
Next line contains N nodes of 1st list.
Next line contains M nodes of 2nd list.

Constraints
0<N<10^6

Output Format
Print the sum list after adding the two linked lists.

Sample Input
3 3
5 6 3
8 4 2
Sample Output
1 4 0 5
Explanation
After adding the two numbers represented by linked lists i.e. 563 + 842 =1405 is represented as sum list. Sum list =1 -> 4 -> 0 -> 5.
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

void insert_front(node* &head,int data)
{
	if(head==NULL)
	{
		head=new node(data);
		return;
	}

	node* n=new node(data);
	n->next=head;
	head=n;
	return;
}

void reverse(node* &head)
{
	node* c,*p=NULL,*n;
	c=head;
	while(c)
	{
		n=c->next;
		c->next=p;
		p=c;
		c=n;

	}
	head=p;
	return;
}

void print(node* head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

void sumLL(node* h,node* h1,int n,int m)
{
	if(n<m)
	{
		swap(n,m);
		swap(h,h1);
	}
	int sum=0,rem=0;
	node* x=h;
	while(h && h1)
	{
		sum=h->data+h1->data+rem;
		rem=sum/10;
		sum=sum%10;
		h->data=sum;
		h=h->next;
		h1=h1->next;
	}
	if(h)
	{
		h->data+=rem;
	}
	else if(rem!=0)
	{
		node* temp=x;
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=new node(rem);
		
	}
	reverse(x);
	print(x);
}
int main () {

	int n,m;
	node* h=NULL;
	node* h1=NULL;
	cin>>n>>m;
	while(n--)
	{
		int data;
		cin>>data;
		insert_front(h,data);
	}
	while(m--)
	{
		int data;
		cin>>data;
		insert_front(h1,data);
	}
	sumLL(h,h1,n,m);


	return 0;
}