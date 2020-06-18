/*
Take as input S, a string. Write a function that toggles the case of all characters in the string. Print the value returned.

Input Format
String

Constraints
Length of string should be between 1 to 1000.

Output Format
String

Sample Input
abC
Sample Output
ABc
Explanation
Toggle Case means to change UpperCase character to LowerCase character and vice-versa.
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char Str1[100];
    int i;

    cout<<"";
    cin>>Str1;

    for (i = 0; Str1[i] != '\0'; i++)
    {
        if (Str1[i] >= 'a' && Str1[i] <= 'z')
        {
            Str1[i] = Str1[i] - 32;
        }
        else if (Str1[i] >= 'A' && Str1[i] <= 'Z')
        {
            Str1[i] = Str1[i] + 32;
        }
    }

    cout<<""<< Str1;

    return 0;
}