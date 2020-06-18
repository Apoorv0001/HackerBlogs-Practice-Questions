/*
Given a sorted array, the task is to remove the duplicate elements from the array.

Input Format
Enter the size of the array N and take N more inputs.

Constraints
Output Format
display the array with Unique values separated by space.

Sample Input
5
1 2 2 3 4 
Sample Output
1 2 3 4
Explanation
In the given test case, 2 is repeated after removing duplicates array will be 1 2 3 4.
*/
#include<iostream>
 
using namespace std;
 
int main()
{
	int i,j,k,n,a[30];
	cout<<"";
	cin>>n;
	cout<<"";
	
	for(i=0;i<n;++i)
		cin>>a[i];
		
	for(i=0;i<n;++i)
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;++k)
					a[k]=a[k+1];
					
				--n;
			}
			else
				++j;
		}
	
	cout<<"";
	for(i=0;i<n;++i)
		cout<<a[i]<<" ";
 
	return 0;
}