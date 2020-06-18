/*
Take as input S, a string. Write a function that returns true if the string is a palindrome and false otherwise. Print the value returned.

Input Format
String

Constraints
String length between 1 to 1000 characters

Output Format
Boolean

Sample Input
abba
Sample Output
true
Explanation
A string is said to be palindrome if reverse of the string is same as string. For example, “abba” is palindrome as it's reverse is "abba", but “abbc” is not palindrome as it's reverse is "cbba".
*/

#include <iostream>
using namespace std;
int main()
{
    char text[100];
    int begin, middle, end, length = 0;

    cin>>text;

    while (text[length] != '\0')
        length++;

    end = length - 1;
    middle = length / 2;

    for (begin = 0; begin < middle; begin++)
    {
        if (text[begin] != text[end])
        {
            cout<<"false";
            break;
        }
        end--;
    }
    if (begin == middle)
        cout<<"true";

    return 0;
}