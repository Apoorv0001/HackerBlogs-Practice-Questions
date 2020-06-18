/*
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once
*/
#include<bits/stdc++.h>
using namespace std;

int findUniqueElement(int A[], int n){
	int INT_SIZE = 8 * sizeof(int);
	int count[INT_SIZE];
	memset(count, 0, sizeof(count));

	for(int i = 0; i < INT_SIZE; i++){
		for(int j = 0; j < n; j++){
			if((A[j] & (1 << i)) != 0)
				count[i] += 1;
		}
	}
	int number = 0;
	for(int i = 0; i < INT_SIZE; i++){
		number += (count[i] % 3) * (1 << i);
	}
	return number;
}

int main() {
	int n;
	cin>>n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin>>A[i];
	
	int res = findUniqueElement(A, n);
	cout<<res<<endl;
	return 0;
}