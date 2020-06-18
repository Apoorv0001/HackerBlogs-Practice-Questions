/*
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.

Input Format
First line contains integer n as size of array. Next n lines contains a single integer as element of array.

Constraints
N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000

Output Format
Print the required output.

Sample Input
4
2
8
6
4
Sample Output
8
Explanation
Arrays= {2, 8, 6, 4} => Max value = 8 .
*/
#include <iostream>
using namespace std;
int main(){
   //n is the number of elements in the array
   int n, largest;
   int num[50];
   cout<<"";
   cin>>n;
   
   /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in num[0], second 
    * in num[1] and so on. 
    */
   for(int i = 0; i < n; i++) {
      cout<<"";
      cin>>num[i];
   }
   // Storing first array element in "largest" variable
   largest = num[0];
   for(int i = 1;i < n; i++) {
    
      if(largest < num[i])
         largest = num[i];
   } 
   cout<<largest;
   return 0;
}