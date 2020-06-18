/*
Take as input str, a string. The string is a mathematical expression e.g. “[a + {b + (c + d) + e} + f]”. Write a recursive function which tests if the brackets in expression are balanced or not and returns a Boolean value. Print the value returned.

Input Format
Enter the string

Constraints
None

Output Format
Display the boolean result

Sample Input
[a+{b+(c+d)+e}+f]
Sample Output
true
*/
#include<bits/stdc++.h>

using namespace std;

bool check(string str,int repo,int &count,char braket[])
{
     if(count==0&&str[repo]=='\0')
          return true;
     else if(str[repo]=='('||str[repo]=='{'||str[repo]=='[')
          braket[count++]=str[repo];
     else if(str[repo]==')'&&braket[count-1]=='(')
          count--;
     else if(str[repo]=='}'&&braket[count-1]=='{')
          count--;
     else if(str[repo]==']'&&braket[count-1]=='[')
          count--;
     else if(str[repo]==')'||str[repo]=='}'||str[repo]==']')
          return false;
     return check(str,repo+1,count,braket);
}

int main()
{
     string str;
     cin>>str;

     char braket[str.length()];
     int count=0;

     if(check(str,0,count,braket))
          cout<<"true";
     else
          cout<<"false";
}