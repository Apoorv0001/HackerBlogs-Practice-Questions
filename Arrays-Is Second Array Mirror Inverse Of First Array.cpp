/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take N more inputs and store that in another array. Write a function which returns true if the second array is inverse of first and false otherwise. Print the value returned.

1.It reads a number N.
2.Take Another N numbers as input and store them in one array.
3.Take Another N numbers as input and store them in an second array.
4.Print true if second array is inverse of first array else print false .

Input Format
Constraints
N cannot be Negative. Range of Numbers can be between 0 to N-1.

Output Format
Sample Input
5
4
0
2
1
3
1
3
2
4
0
Sample Output
true
Explanation
In the sample case, arr1=[4,0,2,1,3],arr2=[1,3,2,4,0]. Inverse of arr1=[1,3,2,4,0] which is equal to arr2.Therefore, arr2 is inverse of arr1 .Hence, ans is true.
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;
     int a[n],i,b[n];

     for(i=0;i<n;i++)
          cin>>a[i];

     for(i=0;i<n;i++)
     {
          b[a[i]]=i;
     }
     int c[n];
     for(i=0;i<n;i++)
          cin>>c[i];
     for(i=0;i<n;i++)
     {
          if(b[i]!=c[i])
               break;
     }
     if(i==n)
          cout<<"true";
     else
          cout<<"false";
}