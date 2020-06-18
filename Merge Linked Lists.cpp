/*
Merge two sorted linked lists into one.

Input Format
Enter N and M (Size of List-1 and List-2 respectively) , Enter space separated N elements for list-1 and M space separated elements for list-2

Constraints
None

Output Format
Linked list of size N+M

Sample Input
5
4
1 4 5 8 9
2 3 6 7
Sample Output
1 2 3 4 5 6 7 8 9
Explanation
Merge two sorted linked list such that the new linked list remains sorted.
*/
#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertion(Node *&head, int d){
	if(head == NULL){
		head = new Node(d);
		return;
	}
	Node *c = head;
	while(c->next){
		c = c->next;
	}
	Node *temp = new Node(d);
	c->next = temp;
}

Node* merge(Node *head1, Node *head2){
	if(head1 == NULL)	return head2;
	if(head2 == NULL)	return head1;

	Node *head = NULL;
	if(head1->data < head2->data){
		head = head1;
		head1->next = merge(head1->next, head2);
	}else{
		head = head2;
		head2->next = merge(head1, head2->next); 
	}
	return head;
}

void display(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main()
{
	int n, m, temp;
	Node *head1 = NULL, *head2 = NULL;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		insertion(head1, temp);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		insertion(head2, temp);
	}
	Node *newHead = merge(head1, head2);
	display(newHead);
	return 0;
}