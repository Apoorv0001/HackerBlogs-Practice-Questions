/*
Take as input N, the size of a chess board. We are asked to place N number of queens in it, so that no queen can kill other.

a. Write a recursive function which returns the count of different distinct ways the queens can be placed across the board. Print the value returned.

b. Write a recursive function which prints all valid configurations (void is the return type for function).

Input Format
Enter the number N(Size of the chessboard)

Constraints
None

Output Format
Display the number of possible ways of arranging N queens and print all the possible arrangements in a space separated manner

Sample Input
4
Sample Output
{1-2} {2-4} {3-1} {4-3}  {1-3} {2-1} {3-4} {4-2}
2
*/
#include<iostream>
using namespace std;

int count=0;
bool kyabakikoplacekrey(int board[][10],int i,int j,int n)
{
    /// checking row and column
    for(int k=0;k<n;k++)
    {
        if(board[i][k] || board[k][j])
        {
            return false;
        }

    }

    /// checking the right diagonal

    int row=i;
    int col=j;
    while(i>=0 && j<n)
    {
        if(board[i][j])
        {
            return false;
        }
        i--;
        j++;
    }

    /// checking the left diagonal

    i=row;
    j=col;
    while(i>=0 && j>=0)
    {
        if(board[i][j])
        {
            return false;
        }
        i--;
        j--;
    }
    return true;
}

bool NQueen(int board[][10],int i,int n)
{///base case
    if(i==n)
    {
        /// print the board
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
            if(board[i][j]==1)
            {
                cout<<"{"<<i+1<<"-"<<j+1<<"}";
            }
          
        }
        cout<<" ";
        }
       cout<<" ";
       count++;
        return false;
    }


    /// recursive case
    for(int j=0;j<n;j++)
    {
        if(kyabakikoplacekrey(board,i,j,n)==true)
        {
            ///put the value in the box
            board[i][j]=1;

            bool kyabakivhoga=NQueen(board,i+1,n);
            if(kyabakivhoga==true)
            {
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}


int main()
{
    int board[10][10]={0};
    int n;
    cin>>n;
    NQueen(board,0,n);
    cout<<endl<<count;
    return 0;
}