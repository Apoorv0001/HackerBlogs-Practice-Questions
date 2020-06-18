/*
You are given a string of lowercase English letters. Print all the distinct permutations of this string in lexicographic order.

Input Format
A string containing lowercase English letters.

Constraints
1<=|S|<=9

Output Format
All distinct permutations in lexicographic order(one permutation in each line).

Sample Input
aba
Sample Output
aab
aba
baa
*/
// //COUNT PERMUTATIONS  ( You are given a string of lowercase English letters. 
// //Print all the distinct permutations of this string in lexicographic order. )
#include<bits/stdc++.h>
using namespace std;
string arr[1000000];
int k = 0;
void permutation(string s,int i)
{
    if(i == s.size())
    {
        arr[k++] = s;
        return ;
	}
    for(int j = i;j<s.length() ; j++)
    {
        swap(s[i],s[j]);
        permutation(s,i+1);
        swap(s[i],s[j]);   
    }
}
int main() 
{
    int count=0;
    string str;
    cin>>str;
    permutation(str,0);
    sort(arr,arr+k);
    string temp = "";
    for(int i = 0;i<k;i++)
    {
        if(temp != arr[i])
           cout<<arr[i]<<endl;
        temp = arr[i];
    }
    return 0;
}