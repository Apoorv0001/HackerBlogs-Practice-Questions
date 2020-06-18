/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns true if M is contained in the array and false otherwise. Print the value returned

Input Format
Enter a number N and add N numbers in an array, then input a number M

Constraints
None

Output Format
Display the Boolean result

Sample Input
3
1
2
3
1
Sample Output
true
*/
#include<bits/stdc++.h>

using namespace std;

bool check(int arr[],int repo,int num)
{
     if(repo==-1)
          return false;
     if(arr[repo]==num)
          return true;
     return check(arr,repo-1,num);
}

int main()
{
     int n;
     cin>>n;

     int a[n],i;
     for(i=0;i<n;i++)
          cin>>a[i];
     cin>>i;
     if(check(a,n-1,i))
          cout<<"true";
     else
          cout<<"false";
}