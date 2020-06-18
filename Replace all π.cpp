/*
Replace all occurrences of pi with 3.14

Input Format
Integer N, no of lines with one string per line

Constraints
0 < N < 1000
0 <= len(str) < 1000

Output Format
Output result one per line

Sample Input
3
xpix
xabpixx3.15x
xpipippixx
Sample Output
x3.14x
xab3.14xx3.15x
x3.143.14p3.14xx
Explanation
All occurrences of pi have been replaced with "3.14".
*/
#include<bits/stdc++.h>

using namespace std;

void display(string str,int i)
{
     if(i>=str.length())
          return;
     if(str[i]=='p'&&str[i+1]=='i')
     {
          cout<<"3.14";
          display(str,i+2);
     }
     else
     {
          cout<<str[i];
          display(str,i+1);
     }

}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string s;
          cin>>s;

          display(s,0);
          cout<<"\n";
     }
}
