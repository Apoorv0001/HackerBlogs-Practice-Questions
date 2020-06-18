/*
You are given an empty chess board of size N*N. Find the number of ways to place N queens on the board, such that no two queens can kill each other in one move. A queen can move vertically, horizontally and diagonally.

Input Format
A single integer N, denoting the size of chess board.

Constraints
1<=N<=11

Output Format
A single integer denoting the count of solutions.

Sample Input
4
Sample Output
2
*/
#include<iostream> 
using namespace std;
int count=0;
bool replace(int board[][12],int i,int j,int n){
    //for checking Row and Column
    for(int k=0;k<n;k++){
        if(board[i][k] || board[k][j]){
            return false;
        }
    }

    // Check for right above diagnol
    int row = i;
    int col = j;

    while(i>=0 && j<n){
        if(board[i][j]){
            return false;
        }
        i--;
        j++;
    }

    i = row;
    j = col;
    // Check for left above diagnol
    while(i>=0 && j>=0){
        if(board[i][j]){
            return false;
        }
        i--;
        j--;
    }

    return true;
}

bool NQueen(int board[][12],int i,int n){
    // Base case
    if( i==n ){
        count++;
        return false;
    }

    // Recursive case
    for(int j=0;j<n;j++){
        if(replace(board,i,j,n) == true){
            board[i][j] = 1; // Place the queen on the board
            bool KyaBaakiBaatBani = NQueen(board,i+1,n);
            if(KyaBaakiBaatBani == true){
                return true;
            }
            board[i][j] = 0; 
        }
    }

    return false;
}


int main(){
    int board[12][12]={0};

    int n;
    cin>>n;

    NQueen(board,0,n);
    cout<<count;
    

    return 0; 
}