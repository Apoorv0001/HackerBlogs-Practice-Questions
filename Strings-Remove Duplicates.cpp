/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/
#include <iostream>
using namespace std;
int main()
{

    char s[100];
    int i, j, len, len1;
    cout<<"";
    cin>>s;

    for (len = 0; s[len] != '\0'; len++);
    len1 = 0;

    for (i = 0; i < (len - len1);)
    {
        if (s[i] == s[i + 1])
        {
            for (j = i; j < (len - len1); j++)
                s[j] = s[j + 1];
            len1++;
        }
        else
        {
            i++;
        }
    }

    cout<<""<< s;

    return 0;
}