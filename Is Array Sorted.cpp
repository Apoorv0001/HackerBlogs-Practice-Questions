/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a recursive function which returns true if the array is sorted and false otherwise. Print the value returned.

Input Format
Enter a number N and take N more inputs and store in an array

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
3
4
Sample Output
true
*/
#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int repo)
{
     if(repo==0)
          return true;
     if(arr[repo]<arr[repo-1])
          return false;
     return isSorted(arr,repo-1);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     if(isSorted(a,n-1))
          cout<<"true";
     else
          cout<<"false";
}