/*
Take as input N, a number. Write a recursive function to find Nth triangle where 1st triangle is 1, 2nd triangle is 1 + 2 = 3, 3rd triangle is 1 + 2 + 3 = 6, so on and so forth. Print the value returned.

Input Format
Enter a number N

Constraints
None

Output Format
Display the Nth triangle

Sample Input
4
Sample Output
10
*/
#include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return (n+sum(n-1));
}

int main() {
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}