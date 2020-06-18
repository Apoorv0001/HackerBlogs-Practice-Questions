
/*Input two numbers a and b . We need to calculate a power b. Both the numbers are integers.

Input Format
2 3

Constraints
Output Format
8
*/
#include <iostream>
using namespace std;
int main() {
    int base, exp;
    long long result = 1;
    cout<<"";
    cin>>base;
    cout<<"";
    cin>>exp;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    cout<<result;
    return 0;
}