/*Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, a number. Write a recursive function which returns the first index at which M is found in the array and -1 if M is not found anywhere. Print the value returned.

Input Format
Enter a number N and add N more elements to an array, then enter a number M

Constraints
None

Output Format
Display the first index at which number M is found

Sample Input
5
3
2
1
2
2
2
Sample Output
1
*/
#include<iostream>
using namespace std;
int function(int arr[],int a,int n,int m)
{
    if(a==n)
        return -1;
    if(arr[a]==m)
        return a;
    return function(arr,a+1,n,m);
}

int main() {
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int m;
    cin>>m;
    if(function(arr,0,n,m) != -1)
       cout<<function(arr,0,n,m);
    else 
        cout<<-1;
    return 0;
}