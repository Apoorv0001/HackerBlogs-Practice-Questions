/*
Take as input N, a number. Take N more inputs to form an integer array. Find the max and min of the array in O(n) time complexity and constant space complexity.

Input Format
Enter the size of the array N and add N more numbers and store in the array

Constraints
None

Output Format
Display the maximum and minimum value respectively

Sample Input
5
2
4
6
8
10
Sample Output
10
2
Explanation
For the given case: arr={2,4,6,8,10}. Max=10 and Min=2.
*/
#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;
    cout << "";
    cin >> n;
    cout << "";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "" << max<<endl;
    cout << "" << min;
    return 0;
}