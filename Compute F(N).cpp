/*
For a positive integer 'n' let's define a function:
f(n) =  - 1 + 2 - 3 + … + (( - 1)n)*n
Your task is to calculate f(n) for a given integer n.

Input Format
The first line contains an integer T, the no. of test cases. The next T lines contain a positive integer denoting the values of 'n' for f(n). Please note the value of N is large as given in constraints.

Constraints
1 ≤ T ≤ 1018
1 ≤ n ≤ 1018

Output Format
Print the values of f(n) in separated lines.

Sample Input
2  
5  
4  
Sample Output
-3  
2  
Explanation
Use mathematical series function to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2){
            cout<<(n-1)/2-n<<endl;
        }
        else
            cout<<n/2<<endl;
    }
}