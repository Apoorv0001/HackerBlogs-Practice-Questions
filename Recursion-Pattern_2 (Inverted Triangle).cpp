/*
Take as input N, a number. Print the following pattern (for N = 5)

       *    *   *   *   *   
       *    *   *   *
       *    *   *
       *    *   
       *    
Input Format
Enter value of N

Constraints
None

Output Format
Tab separated (*)

Sample Input
5
Sample Output
*	*	*	*	*	
*	*	*	*	
*	*	*	
*	*	
*	

*/

#include<bits/stdc++.h>

using namespace std;

void display(int n)
{
     if(n==0)
          return;
     for(int i=0;i<n;i++)
          cout<<"*\t";
     display(n-1);
}
int main()
{
     int n;
     cin>>n;

     display(n);
}