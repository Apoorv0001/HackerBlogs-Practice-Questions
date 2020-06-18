/*
Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
Explanation
You've to calculate the reverse in a number, not just print the reverse.
*/

#include <iostream>
using namespace std;
int main()
{
    int n, reverse = 0, rem;
    cout << "";
    cin >> n;
    while(n != 0)
    {
        rem = n%10;
        reverse = reverse*10 + rem;
        n /= 10;
    }
    cout << reverse;
    return 0;
}