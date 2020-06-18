/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the last index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

Input Format
Enter a number N and add N more numbers to an array, then enter number M to be searched

Constraints
None

Output Format
Display the last index at which the number M is found

Sample Input
5
3
2
1
2
3
2
Sample Output
3
*/

#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;


int find(int a[],int n,int m)
{
	if(n==0)
	{
		return -1;
	}
	if(a[n]==m)
	{
		return n;
	}
	find(a,n-1,m);
}


int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	cout<<find(a,n-1,m);
}