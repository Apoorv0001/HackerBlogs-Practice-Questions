/*
You are given an array of length N and a range of the numbers which are present in the array.
You just need to accomplish a simple task i.e. just sort the array in ascending order and print the array.
Condition: Sort using counting the elements.

Input Format
The first line contains integer T, the number of test cases. The next T subsequent lines contain:

N, the LENGTH of the array.
Two space-separated integers representing RANGE for minimum and maximum element in the sequence of N numbers.
N space-separated integers i.e. Ai
Constraints
0 < T < 1000
0 < N < 106
0 <= Ai <= 106

Output Format
N space-separated integers, Ai

Sample Input
1
3
0 5
3 2 1
Sample Output
1 2 3
*/

#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int minV, maxV;
		cin>>minV>>maxV;
		int A[n], B[maxV+1];
		fill_n(B, maxV+1, 0);
		for(int i = 0; i < n; i++){
			cin>>A[i];
			B[A[i]]++;
		}
		for(int i = 1; i <= maxV; i++){
			B[i] += B[i-1];
		}
		int output[n];
		for(int i = 0; i < n; i++){
			output[B[A[i]] - 1] = A[i];
			B[A[i]]--;
		}
		for(int i = 0; i < n; i++)
			cout<<output[i]<<" ";
	}
	return 0;
}