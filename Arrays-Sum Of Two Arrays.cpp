/*
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format
Constraints
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7
Sample Output
3, 5, 5, 9, 6, END
Explanation
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,m,count=0,i;
    int a1[n],temp[1000001],ASum=0,BSum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    for(int i=n-1;i>=0;i--){
        ASum += a1[i]*pow(10,count++);
    }
    count=0;
    for(int i=m-1;i>=0;i--){
        BSum += a2[i]*pow(10,count++);
    }
    int FSum = ASum + BSum; 
    int j=0;
    while(FSum){
        temp[j++] = FSum % 10;
        FSum = FSum / 10;
    }
    for(int k=j-1;k>=0;k--){
        cout<<temp[k]<<", ";
    }
    cout<<"END";
}