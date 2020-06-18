/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a recursive function which selection sorts the given array. Print all the values in the sorted array.

Input Format
Enter a number N and input N more numbers and store in an array

Constraints
None

Output Format
Display the values of the sorted array

Sample Input
3
3
2
1
Sample Output
1 2 3
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     int i;
     int a[t];

     for(i=0;i<t;i++)
          cin>>a[i];
     sort(a,a+t);
     for(i=0;i<t;i++)
          cout<<a[i]<<"\n";
}