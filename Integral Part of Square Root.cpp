/*
Take the following as input.

A number (N)
Write a function which returns the integral part of square root of N. Print the value returned.

Input Format
Constraints
0 < N < 1000000000

Output Format
Sample Input
37
Sample Output
6
Explanation
Just print the integral part of square root of number.In the given case square root of 37 is 6.0827625303 and it's integral part is 6.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int number, result;
 
  	cout<<"";
  	cin>>number;
  
  	result = pow(number, 0.5);
  
  	cout<<result;
 
  	return 0;
}