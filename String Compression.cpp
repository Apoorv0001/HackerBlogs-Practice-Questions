/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input “aaabbccds” print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.
*/

#include <iostream>
using namespace std;
int main()
{
    char a[100];
    int i = 0, j = 0, m;
    cout<<"";
    cin>>a;
    while (a[i] != 0)
    {
        while (a[i] - a[i + 1] == 0)
        {
            j++;
            i++;
        }
        m = j + 1;
        cout<<""<< a[i - j]<< m;
        i++;
        j = 0;
    }
    return 0;
}