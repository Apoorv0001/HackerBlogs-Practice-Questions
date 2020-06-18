/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns an array containing indices of all items in the array which have value equal to M. Print all the values in the returned array.

Input Format
Enter a number N(size of the array) and add N more numbers to the array Enter number M to be searched in the array

Constraints
1 <= Size of array <= 10^5

Output Format
Display all the indices at which number M is found in a space separated manner

Sample Input
5
3
2
1
2
3
2
Sample Output
1 3
Explanation
2 is found at indices 1 and 3.
*/
#include <iostream>
using namespace std;

void check(int a[1000], int n, int m, int j)
{
	if (j == n)
	{
		return;
	}
	if (a[j] == m)
	{
		int i = j;
		cout << j << " ";
		j = i;
	}

	check(a, n, m, j + 1);
}

int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int m;
	cin >> m;
	check(a, n, m, 0);
	return 0;
}