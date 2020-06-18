/*
Check for duplicate parenthesis in an expression

Input Format
First line contains T, the number of testcases. Then each testcase contains a string in which we check for duplicacy.

Constraints
1<=T<=100 10<=len(str)<=1000

Output Format
For each testcase print "Duplicate Found" if we have duplicacy otherwise print "No Duplicates Found" if there are no duplicates.

Sample Input
2
(((a+(b))+(c+d)))
((a+b)+(c+d))
Sample Output
Duplicate Found 
No Duplicates Found 
*/
#include<iostream>
#include<stack>
using namespace std;

bool checkDuplicate(string str){
	stack<int> s;
	for(int i = 0; i < str.size(); i++){
		char ch = str[i];
		if(ch == ')'){
			if(s.top() == '(')
				return true;
			else{
				while(s.top() != '(')
					s.pop();
				s.pop();
			}
		}else{
			s.push(ch);
		}
	}
	return !s.empty();
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<(checkDuplicate(s) ? "Duplicate Found" : "No Duplicates Found")<<"\n";
	}
	return 0;
}