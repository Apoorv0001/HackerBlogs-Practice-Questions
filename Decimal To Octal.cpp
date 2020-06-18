/*
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long decimalnum, remainder, quotient;
    int octalNumber[100], i = 1, j;
 
    cout<<"";
    cin>>decimalnum;
    quotient = decimalnum;
    while (quotient != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
   
    for (j = i - 1; j > 0; j--)
       cout<< octalNumber[j];
    return 0;
}