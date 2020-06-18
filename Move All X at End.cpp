/*
Take as input str, a string. Write a recursive function which moves all ‘x’ from the string to its end.
E.g. for “abexexdexed” return “abeedeedxxx”.
Print the value returned

Input Format
Single line input containing a string

Constraints
Length of string <= 1000

Output Format
Single line displaying the string with all x's moved at the end

Sample Input
axbxc
Sample Output
abcxx
Explanation
All x's are moved to the end of string while the order of remaining characters remain the same.
*/
#include<iostream>
using namespace std;

void moveString(string s,int n)
{
    char ch;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='X' || s[i]=='x')
        {
            ch=s[i];
            int j=i;

            while(s[j]!='\0')
            {
                s[j]=s[j+1];
                j=j+1;
            }
        s[n-1]=ch;;
        }

    }

    cout<<s;
}


int main()
{

    string s;
    getline(cin,s);
    int n=s.length();
    moveString(s,n);
}