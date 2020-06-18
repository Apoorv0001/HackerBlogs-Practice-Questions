/*
Take as input str, a string. Write a recursive function which returns a new string in which all duplicate consecutive characters are reduced to a single char. E.g. for “hello” return “helo”. Print the value returned.

Input Format
Enter the string

Constraints
None

Output Format
Display the resulting string

Sample Input
hello
Sample Output
helo
*/

#include<bits/stdc++.h>

using namespace std;

void edit(char str[],int repo,char current)
{
     if(str[repo]=='\0')
          return;
     if(str[repo]==current)
     {
          for(int i=repo;i<strlen(str);i++)
               str[i]=str[i+1];
          edit(str,repo,current);
     }
     else
     {
          current=str[repo];
          edit(str,repo+1,current);
     }
}

int main()
{
     char str[1000];
     cin>>str;

     edit(str,0,' ');
     cout<<str;
}