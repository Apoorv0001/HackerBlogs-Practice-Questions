/*
Read as input 5 Numbers and print the largest out of them

Input Format
5 Space Separated Numbers (both positive and negative)

Constraints
Output Format
Sample Input
2 4 7 -2 3
Sample Output
7
Explanation
In the given case 7 is largest among the given numbers.
*/
#include <iostream>
using namespace std;
 
int main()
{
	int nums[5];
	cout<<"";
	for(int i = 0; i < 5; i++)
		cin >> nums[i];
	
	int ma = nums[0];
	for(int num : nums)
		ma = max(num, ma);
	
	cout << ma << endl;
}