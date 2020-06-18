/*
Take as input str, a string. Write a function which tests if the string is a palindrome or not and returns a Boolean value. Print the value returned.

Input Format
Enter a String

Constraints
None

Output Format
Display the boolean result

Sample Input
1221
Sample Output
true
*/
#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str,int rep,int last)
{
     if(rep>=last)
          return true;
     if(str[rep]==str[last]&&palindrome(str,rep+1,last-1))
          return true;
     return false;
}
int main()
{
     string str;
     cin>>str;

     if(palindrome(str,0,str.length()-1))
          cout<<"true";
     else
          cout<<"false";
}