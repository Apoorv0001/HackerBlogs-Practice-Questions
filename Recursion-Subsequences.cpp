/*
Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.

a. Write a recursive function which returns the count of subsequences for a given string. Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”, “abcd”.given string (void is the return type for function).
Note: Use cin for input for C++

Input Format
Enter a string

Constraints
None

Output Format
Display the total no. of subsequences and also print all the subsequences in a space separated manner

Sample Input
abcd
Sample Output
 d c cd b bd bc bcd a ad ac acd ab abd abc abcd 
16
Explanation
Print all possible subsequences of the given string.
*/
#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
void sub(char *in,char *out,char *display,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		strcat(display,out);
		strcat(display," ");
		return;
	}
	sub(in,out,display,i+1,j);
    out[j]=in[i];
	sub(in,out,display,i+1,j+1);
}
int main() {
	char in[100],out[100],display[100]="  ";
	cin>>in;
	sub(in,out,display,0,0);
	cout<<display<<endl;
	cout<<pow(2,strlen(in));
	return 0;
}