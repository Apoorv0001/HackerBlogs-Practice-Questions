/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the LCM of N1 and N2. Print the value returned.

Input Format
Constraints
0 < N1 < 1000000000 0 < N2 < 1000000000

Output Format
Sample Input
4 
6
Sample Output
12
Explanation
The smallest number that is divisible by both N1 and N2 is called the LCM of N1 and N2.
*/
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, max;
    cout << "";
    cin >> n1 >> n2;
    
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << max;
            break;
        }
        else
            ++max;
    } while (true);
    
    return 0;
}