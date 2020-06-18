/*
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which reverses the array. Print the values of reversed array.

Input Format
Enter a number N and take N more inputs

Constraints
None

Output Format
Display values of the reversed array

Sample Input
4
1
2
3
4
Sample Output
4 3 2 1
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
      cin>> a[c];

   for (c = n - 1, d = 0; c >= 0; c--, d++)
      b[d] = a[c];

   for (c = 0; c < n; c++)
      a[c] = b[c];

   cout<<"";

   for (c = 0; c < n; c++)
      cout<<" "<<a[c];

   return 0;
}