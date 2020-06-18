/*
Take N (number of rows - only odd numbers allowed), print the pattern as given in input and output section.

Input Format
Single Integer

Constraints
0 < N < 10 (only odd numbers allowed)

Output Format
Pattern

Sample Input
5
Sample Output
      *
    * * *
  * * * * *
    * * *
      *
Explanation
Each '*' is separated from other by a tab.
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	// first (n+1)/2
	int n1 = (n+1)/2, totalSpaces = n1 - 1, totalStars = 1, n2; 
	for(int row = 1; row <= n1; row++){
		for(int spaces = 1; spaces <= totalSpaces; spaces++)
			cout<<' '<<"\t";
		for(int stars = 1; stars <= totalStars; stars++)
			cout<<'*'<<"\t";

		// updating stars and spaces
		totalSpaces--;
		totalStars += 2;
		//	moving to new line
		cout<<endl;
	}

	n2 = n1-1, totalSpaces = 1; totalStars -= 4;
	for(int row = 1; row <= n2; row++){
		for(int spaces = 1; spaces <= totalSpaces; spaces++)
			cout<<' '<<"\t";
		for(int stars = 1; stars <= totalStars; stars++)
			cout<<'*'<<"\t";

		// updating stars and spaces
		totalSpaces++;
		totalStars -= 2;
		// moving to new line
		cout<<endl;
	}
	return 0;
}