/*
Take as input a Number N and Print all the prime numbers from 2 to N

Input Format
Input a number N

Constraints
Output Format
All prime numbers separated by Commas

Sample Input
18
Sample Output
2, 3, 5, 7, 11, 13, 17
*/
#include<iostream>
using namespace std;
int main () {
    int N;
    cin >> N;
    int no, i;
	int count = 0;
    for (no = 1; no <= N; no = no + 1)
    {
		
        i = 2;
        while (i <= no - 1)
        {
            if (no % i == 0)
            {
                break;
            }
            i = i + 1;
        }
        if (i == no)
        {
			if(count != 0){		
				cout<<", ";
			}
			count++;
            cout << no ;
        }
	}
    cout << endl;
    return 0;
}