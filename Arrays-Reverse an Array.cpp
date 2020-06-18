/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that reverses the array. Print the values in reversed array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Reverse the elements in the Array.
4.Print the reversed Array.

Input Format
First line contains single integer n denoting the size of the array. Next line contains n space separated integers denoting the elements of the array.

Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000.

Output Format
Print the elements of the reversed array in space separated manner.

Sample Input
5
0 4 6 8 9
Sample Output
9 8 6 4 0 
Explanation
In the sample case , arr=[0,4,6,8,9] is reversed to arr=[9,8,6,4,0].


*/

#include <iostream>
using namespace std;
int main()
{
   int n, c, d, a[100], b[100];

   cout<<"";
	cin>>n;

   cout<<"";

   for (c = 0; c < n ; c++)
      cin>>a[c];

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   for (c = 0; c < n; c++)
      a[c] = b[c];

   cout<<"";

   for (c = 0; c < n; c++)
      cout<<"\n"<<a[c];

   return 0;
}