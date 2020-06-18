/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function that bubble sorts the array. Print the elements of sorted array.

1.It reads a number N.
2.Take Another N numbers as input and store them in an Array.
3.Bubble sort the array and print the Array.

Input Format
Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 100000000.

Output Format
Sample Input
4
2
-18
45
30
Sample Output
-18
2
30
45
Explanation
For each test case write bubble sorting program to sort the elements of the array.
*/
#include <iostream>
using namespace std;
int main()
{
  int array[100], n, c, d, swap;

  cout<<"";
  cin>>n;

  cout<<"";

  for (c = 0; c < n; c++)
   cin>>array[c];

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  cout<<"";

  for (c = 0; c < n; c++)
    	cout<<"\n"<< array[c];

  return 0;
}