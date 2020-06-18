/*
Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3

Input Format
Constraints
0 < N1 < 100 N1 < N2 < 10000

Output Format
Sample Input
400
1000
Sample Output
407
Explanation
Each number in output is in separate line.
*/
#include <iostream>
using namespace std;
int main()
{
  int num1, num2, i, num, digit, sum;
  cout << "";
  cin >> num1;
  cout << "";
  cin >> num2;
  for(i = num1; i <= num2; i++)
  {
        sum = 0;
        num = i;
        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }
        if(sum == i)
        {
            cout << i << endl;
        }
  }
  return 0;
}