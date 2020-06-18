/*
Given an array A of size N and another integer “target” , write a function which prints all triplets of numbers which sum to target.

Input Format
First line of testcase contains a single integer N.
Next line contains N space separated integers which are the elements of array A.
Last line contains a single integer "target".

Constraints
1 <= N <= 1000
|Ai| <= 20000
| target | <= 20000

Output Format
Print all triplets in a new line. All triplets must be sorted in increasing order individually as well as collectively.
For each triplet print three integers A,B and C as
A, B and C

Sample Input
9
5 7 9 1 2 4 6 8 3
10
Sample Output
1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
Explanation
[ 1,2,7 ] , [1,3,6] , [1,4,5] and [2,3,5] are the only triplets which sum to 10.
*/

#include<bits/stdc++.h>
using namespace std;
void findTriplets(long long arr[], long long n, long long sum) 
{ 
    sort(arr, arr + n); 
  
    for (int i = 0; i < n - 1; i++) { 
       
        int l = i + 1; 
        int r = n - 1; 
        int x = arr[i]; 
        while (l < r) { 
            if (x + arr[l] + arr[r] == sum) { 
 cout<<x<<", "<<arr[l]<<" and "<<arr[r]<<endl;
                 l++; 
        
            } 
            else if (x + arr[l] + arr[r] < sum) 
                l++; 
            else
                r--; 
        } 
    }
}   
int main() {
	long long n,arr[10001],target;
	cin>>n;
	for(int i=0;i<n;i++)
	 cin>>arr[i];

	cin>>target;
    findTriplets(arr,n,target);
	  

	return 0;
}