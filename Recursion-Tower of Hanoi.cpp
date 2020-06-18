/*
Google Tower of Hanoi.

a. Write a recursive function which prints the steps required to solve the tower of Hanoi problem for N discs.

b. Write a recursive function which returns number of steps required to solve the tower of Hanoi problem for N discs.

Let T1 be the Source Tower, T2 be the Destination Tower and T3 be the Auxillary Tower.

Input Format
Enter the number of discs

Constraints
None

Output Format
Display the steps required to solve the tower and also print the total number of steps required

Sample Input
2
Sample Output
Move 1th disc from T1 to T3
Move 2th disc from T1 to T2
Move 1th disc from T3 to T2
3
*/

#include<bits/stdc++.h>

using namespace std;

void TOH(string fr,string to,string us,int n,int &count)
{
     if(n==0)
          return;
     TOH(fr,us,to,n-1,count);
     count++;
     cout<<"Move "<<n<<"th disc from "<<fr<<" to "<<to<<"\n";
     TOH(us,to,fr,n-1,count);
}

int main()
{
     int n;
     cin>>n;
     int count=0;
     TOH("T1","T2","T3",n,count);
     cout<<count;
}
