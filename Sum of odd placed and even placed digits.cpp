/*
Take N as input. Print the sum of its odd placed digits and sum of its even placed digits.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
2635
Sample Output
11
5
Explanation
5 is present at 1st position, 3 is present at 2nd position, 6 is present at 3rd position and 2 is present at 4th position.

Sum of odd placed digits on first line. 5 and 6 are placed at odd position. Hence odd place sum is 5+6=11

Sum of even placed digits on second line. 3 and 2 are placed at even position. Hence even place sum is 3+2=5
*/
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cin>>n;
    int a[1000];
    int i=0;
    int count=0;
    while(n>0)
    {
        r=n%10;
        a[i]=r;
        count=count+1;
        i++;
        n=n/10;
    }
    int c=i-1;
    int j=0;
    int b[1000];
    while(c>=0)
    {
        b[j]=a[c];
        j++;
        c--;
    }
    j=0;
    int sum=0;
    int sum1=0;
    while(j<count)
    {
        if(j%2==0)
        {
            sum=sum+b[j];
        }
        if(j%2!=0)
        {
            sum1=sum1+b[j];
        }
        j++;
    }
    if(count%2!=0)
    {
        cout<<sum<<endl;
        cout<<sum1<<endl;
    }
    else
    {
        cout<<sum1<<endl;
        cout<<sum<<endl;
    }
    return 0;
}