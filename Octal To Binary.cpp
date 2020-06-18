/*
Take N (number in octal format). Write a function that converts it to binary format. Print the value returned.

Input Format
A single integer N

Constraints
0 < N <= 100000000

Output Format
Print the binary conversion of N

Sample Input
33
Sample Output
11011
Explanation
11011 is the binary conversion of integer 33

(33)8 = (11011)2
*/
 #include<iostream>
 #include<math.h>
 using namespace std;
 int main()
 {
     int oct, dec=0, bin=0, i=0;

     cout<<"";
     cin>>oct;

     /* Convert octal to decimal */
     while(oct != 0)
     {
         dec += (oct%10) * (pow(8,i));
         oct /= 10;
         i++;
     }

     /* Now convert decimal to binary */
     i=1;
     while(dec != 0)
     {
         bin += (dec%2) * i;
         dec /= 2;
         i *= 10; 
     }

     cout<<bin;

     return 0;
 }