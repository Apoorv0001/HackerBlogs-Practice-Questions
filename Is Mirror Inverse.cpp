/*
Take the following as input.

A number
Assume that for a number of n digits, the value of each digit is from 1 to n and is unique. E.g. 32145 is a valid input number.

Write a function which returns true if the number is mirror-inverse and false otherwise, where inverse and mirror-inverse are defined as follows

Inverse of 32145 is 12543. In 32145, “5” is at 1st place, therefore in 12543, “1” is at 5th place; in 32145, “4” is at 2nd place, therefore in 12543, “2” is at 4th place. A number is called mirror-inverse if its inverse is equal to itself. Print the value returned.

Input Format
Integer

Constraints
0 < N < 1000000000

Output Format
Boolean

Sample Input
12345
Sample Output
true
Explanation
Use functions. Write a function to get inverse and then use it check mirror-inverse property.
*/
#include<iostream>
using namespace std;
int main() {
	long long N;
	cin>>N;
	int a[1000000000];
	int c=1;
	while(N)
	{
	    a[c]=N%10;
	    N/=10;
	    c++;
	}
    for(int i=1;i<c;i++){
        if(a[a[i]] != i){ 
            cout<<"false"<<endl;
            return 0; 
        }
    }
    cout<<"true"<<endl;
}