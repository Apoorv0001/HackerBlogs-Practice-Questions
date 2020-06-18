/*
We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number
*/

#include<iostream>
using namespace std;

void twoNonRepeatingElements(int A[], int n, int *x, int *y){
	int Xor = A[0], set_bit_no;
	int i;
	*x = 0, *y = 0;
	for(i = 1; i < n; i++)
		Xor ^= A[i];

	set_bit_no = Xor & ~(Xor - 1);

	for(i = 0; i < n; i++){
		if(A[i] & set_bit_no)
			*x = *x ^ A[i];
		else 
			*y = *y ^ A[i];
	}
}

int main() {
	int n;
	cin>>n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin>>A[i];
	int *x = new int();
	int *y = new int();
	twoNonRepeatingElements(A, n, x, y);
	if(*x < *y)
		cout<<*x<<" "<<*y<<endl;
	else 
		cout<<*y<<" "<<*x<<endl;
	return 0;
}