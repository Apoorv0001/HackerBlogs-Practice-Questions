/*
Given a integer as a input and replace all the '0' with '5' in the integer

Input Format
Enter an integer n

Constraints
0<=n<=1000000000000

Output Format
All zeroes are replaced with 5

Sample Input
102
Sample Output
152
Explanation
Check each digit , if it is nonzero, then no change required but if it is zero then replace it by 5
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     int i=0;
     while(i<str.length())
     {
          if(str[i]=='0')
               cout<<"5";
          else
               cout<<str[i];
          i++;
     }
}