/*
Implement a stack such that the operation findMid() is performed in linear time complexity i.e. in O(1). findMid() is a function which returns the middle element of the stack.

Input Format
First line contains the number of elements in stack,N. Next line contains N elements of stack.

Constraints
0<N<10^9

Output Format
Print the middle element of the stack.

Sample Input
7
1 2 3 4 5 6 7
Sample Output
4
Explanation
In the given case 4 is the middle element of the stack.
*/
#include<iostream>
using namespace std;

class Stack{
	int *A;
	int top;
	int n;
public:	
	Stack(int size){
		n = size;
		A = new int[n];
		top = -1;
	}
	void push(int data){
		if(top == n){
			cout<<"Overflow\n";
			return;
		}
		top++;
		A[top] = data;
	}
	void pop(){
		if(top == -1){
			cout<<"Underflow\n";
			return;
		}
		top--;
	}
	int findMid(){
		int mid = top/2;
		return A[mid];
	}
};

int main(){
	int n;
	cin>>n;
	Stack s(n);
	for(int i = 0; i < n; i++){
		int temp;
		cin>>temp;
		s.push(temp);
	}
	cout<<s.findMid()<<endl;
	return 0;
}