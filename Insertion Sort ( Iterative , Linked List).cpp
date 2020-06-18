/*
Implement Insertion Sort in a linked list using iterative methods

Input Format
Enter the size of the linked list N and take N more inputs

Constraints
Output Format
Display the elements of the sorted list in a space separated manner

Sample Input
4
9
6
3
2
Sample Output
2 3 6 9
*/

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		Node(int d){
			data = d;
			next = NULL;
		}
};

void insertLL(Node *&head, int data){
	if(!head){
		head = new Node(data);
		return;
	}
	Node *c = head;
	while(c->next){
		c = c->next;
	}
	Node *temp = new Node(data);
	c->next = temp;
}

void insertNode(Node *&newHead, Node *c){
	if(!newHead || newHead->data >= c->data){
		c->next = newHead;
		newHead = c;
	}else{
		Node *itr = newHead;
		while(itr->next && itr->next->data < c->data){
			itr = itr->next;
		}
		c->next = itr->next;
		itr->next = c;
	}
}

void sortLL(Node *&head){
	Node *c = head;
	Node *newHead = NULL;
	while(c){
		Node *n = c->next;
		insertNode(newHead, c);
		c = n;
	}
	head = newHead;
}

void display(Node *head){
	while(head){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	Node *head = NULL;
	for(int i = 0; i < n; i++){
		int temp;
		cin>>temp;
		insertLL(head, temp);
	}
	sortLL(head);
	display(head);
	return 0;
}