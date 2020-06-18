/*
Take as input N1 and N2, both numbers. N1 and N2 is the number of rows and columns on a rectangular board. Our player starts in top-left corner of the board and must reach bottom-right corner. In one move the player can move 1 step horizontally (right) or 1 step vertically (down).

a. Write a recursive function which returns the count of different ways the player can travel across the board. Print the value returned.

b. Write a recursive function which returns an ArrayList of moves for all valid paths across the board. Print the value returned.

e.g. for a board of size 3,3; a few valid paths will be “HHVV”, “VVHH”, “VHHV” etc. c. Write a recursive function which prints moves for all valid paths across the board (void is the return type for function).

Input Format
Enter the number of rows N and columns M

Constraints
None

Output Format
Display the total number of paths and display all the possible paths in a space separated manner

Sample Input
3
3
Sample Output
VVHH VHVH VHHV HVVH HVHV HHVV
6
*/
#include <bits/stdc++.h>
using namespace std;
long long int cnt=0;
bool canimove(int row,int col,int enRow,int enCol){
    if(row<=enRow && col<=enCol)
        return true;
    return false;
}
bool Mazepathcnt(int stRow,int stCol,int enRow,int enCol,char board[],int j){
    if(stRow>=enRow && stCol>=enCol){
        cnt++;
        return false;
    }
//MOVE VERTICALLY
    bool istrue=canimove(stRow+1,stCol,enRow,enCol);
    if(istrue){
        board[j]='V';
        bool IsSuccess1=Mazepathcnt(stRow+1,stCol,enRow,enCol,board,j+1);
        if(IsSuccess1){
            return true;
        }
    }
    bool IsTrue2=canimove(stRow,stCol+1,enRow,enCol);
    if(IsTrue2){
        board[j]='H';
        bool IsSuccess2=Mazepathcnt(stRow,stCol+1,enRow,enCol,board,j+1);
        if(IsSuccess2){
            return true;
        }
    }
    board[j]='0';
    return false;

}
bool Mazepath(int stRow,int stCol,int enRow,int enCol,char board[],int j){
    if(stRow>=enRow && stCol>=enCol){
        for(int i=0;i<j;i++)
            cout<<board[i];
        cout<<" ";
        return false;
    }
//MOVE VERTICALLY
    bool istrue=canimove(stRow+1,stCol,enRow,enCol);
    if(istrue){
        board[j]='V';
        bool IsSuccess1=Mazepath(stRow+1,stCol,enRow,enCol,board,j+1);
        if(IsSuccess1){
            return true;
        }
    }
    bool IsTrue2=canimove(stRow,stCol+1,enRow,enCol);
    if(IsTrue2){
        board[j]='H';
        bool IsSuccess2=Mazepath(stRow,stCol+1,enRow,enCol,board,j+1);
        if(IsSuccess2){
            return true;
        }
    }
    board[j]='0';
    return false;

}
int main()
{
    int n1,n2;cin>>n1>>n2;
    char board[100000];
    for(int i=0;i<100000;i++){
        board[i]='0';
    }
     Mazepathcnt(0,0,n1-1,n2-1,board,0);
    Mazepath(0,0,n1-1,n2-1,board,0);
    cout<<endl<<cnt<<endl;
    return 0;
}