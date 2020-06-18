/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

                          5 4 3 2 1 0 1 2 3 4 5
                            4 3 2 1 0 1 2 3 4 
                              3 2 1 0 1 2 3 
                                2 1 0 1 2 
                                  1 0 1 
                                    0 
                                  1 0 1 
                                2 1 0 1 2 
                              3 2 1 0 1 2 3 
                            4 3 2 1 0 1 2 3 4 
                          5 4 3 2 1 0 1 2 3 4 5
Input Format
Take N as input.

Constraints
N <= 20

Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int totalSpaces = 0, num = n;
	for(int row = 1; row <= n; row++){
		int cur = num, spaces = 1;
		// Printing first n spaces
		while(spaces <= totalSpaces){
			cout<<"  ";
			spaces++;
		}
		// Printing from n+1-row to 0
		while(cur >= 0){
			cout<<cur--<<" ";
		}
		// Printing  from 1 to num
		cur = 1;
		while(cur <= num)
			cout<<cur++<<" ";

		// moving to new line
		cout<<"\n";
		// updating totalSpaces and num values
		totalSpaces++;
		num--;
	}
	for(int row = 1; row <= n; row++)
		cout<<"  ";
	cout<<0<<endl;
	
	// Assigning new values to totalSpaces and num
	totalSpaces = n-1, num = 1; 
	for(int row = 1; row <= n; row++){
		int spaces = 1;
		// Printing first n spaces
		while(spaces <= totalSpaces){
			cout<<"  ";
			spaces++;
		}
		// Printing from num to 0
		int cur = num;
		while(cur >= 0)
			cout<<cur--<<" ";
		
		// Printing form 1 to num
		cur = 1;
		while(cur <= num)
			cout<<cur++<<" ";

		// moving to new line
		cout<<endl;
		// Updating totalSpaces and num values
		totalSpaces--;
		num++;
			
	}
	return 0;
}