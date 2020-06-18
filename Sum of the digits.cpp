/*
Take as input str, a number in form of a string. Write a recursive function to find the sum of digits in the string. Print the value returned.

Input Format
Enter the Number.

Constraints
None

Output Format
Display the sum of the digits

Sample Input
1234
Sample Output
10
*/

#include<bits/stdc++.h>

using namespace std;

int sum(string str,int repo)
{
     if(str[repo]=='\0')
          return 0;
     int a= str[repo] - '0';
     return a+sum(str,repo+1);
}

int main()
{
     string str;
     cin>>str;

     cout<<sum(str,0);
}