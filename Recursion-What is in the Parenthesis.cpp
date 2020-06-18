/*
Take as input str, a string. The string contains a single pair of parenthesis “(..)”. Write a recursive function which returns the contents between the parenthesis. E.g. for “xyz(abc)def” return “abc”. Print the value returned.

Input Format
Enter the string

Constraints
None

Output Format
Display the content between the parenthesis

Sample Input
abc(x)
Sample Output
x
*/
#include<iostream>
using namespace std;

void check(string s,int len,int i)
{
	for(i=0;i<len;i++){
     int j=0;
	
	
 	if(s[i]=='(' )
 	{
 		j=i+1;
 	
 	    while(s[j]!=')')
            	{
		cout<<s[j];
		j=j+1;
            	}
 
 	}
 }
}

int main() {
	string s;
	getline(cin,s);
	int len=s.length();
	//cout<<s;
	check(s,len,0);
	return 0;
}