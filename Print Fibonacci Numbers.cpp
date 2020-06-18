/*
Take N as input. Print all fibonnaci numbers less than equal to N.

Input Format
Constraints
0 < N <= 1000

Output Format
Sample Input
11
Sample Output
0
1
1
2
3
5
8
Explanation
Each output should be in separate line.
*/
#include<iostream>
using namespace std;
int main(){

int n,x=0,y=1,c=0;
cin>>n;
cout<<x<<endl;
cout<<y<<endl;
while(c<=n)
{
    c = x + y;
    x = y;
    y = c;
    if (c > n)
    {
        break;
    }
    cout<<c;
    cout<<endl;
}
return 0;
}