/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], result;
    int i, len;
    int max = -1;

    int freq[256] = {0};

    cout<<"";
    cin>>str;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    for (i = 0; i < len; i++)
    {
        if (max < freq[str[i]])
        {
            max = freq[str[i]];
            result = str[i];
        }
    }
    cout<<""<<result;

    return 0;
}