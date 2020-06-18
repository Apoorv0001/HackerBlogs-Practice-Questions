/*
Given N numbers, calculate sum of their factorial modulo 107. (Note it is not 10^7)

Input Format
First line contains positive integer N and the next line contains N space separated integers.

Constraints
N <= 10 and all integers lie between 0 and 1000.

Output Format
Output a single line denoting the result.

Sample Input
3
3 4 5
Sample Output
43
Explanation
3! = 6

4! = 24

5! = 120

(6 + 24 + 120) % 107 = 43
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int fact=1;
		for(int j=arr[i];j>0;j--)
		{
			fact=(fact*j)%107;
		}
		sum=sum+fact;
	}
	int var=(sum%107);
	cout<<var;
	return 0;
}