/*
Take as input str, a number in form of a string. Write a recursive function to convert the number in string form to number in integer form. E.g. for “1234” return 1234. Print the value returned.

Input Format
Enter a number in form of a String

Constraints
1 <= Length of String <= 10

Output Format
Print the number after converting it into integer

Sample Input
1234
Sample Output
1234
Explanation
Convert the string to int. Do not use any inbuilt functions.
*/
#include<iostream>
using namespace std;

int convert(string str,int repo,long &pv)
{
     if(str[repo]=='\0')
          return 0;
     int a = str[repo]-'0';
     
     int d=convert(str,repo+1,pv);
     a=(a*pv)+d;
     pv*=10;
     return a;
}

int main()
{
     string str;
     cin>>str;

     long pv=1;
     cout<<convert(str,0,pv);
}