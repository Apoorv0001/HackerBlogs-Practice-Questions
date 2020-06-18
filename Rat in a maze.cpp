/*
You are given an N*M grid. Each cell (i,j) in the grid is either blocked, or empty. The rat can move from position (i,j), down or right on the grid.
Initially rat is on the position (1,1). It wants to reach position (N,M). Find the rightmost path through which, rat can reach this position. A path is rightmost, if the rat is at position (i,j), it will always move to (i,j+1), if there exists a path from (i,j+1) to (N,M).

Input Format
First line contains 2 integers, N and M, denoting the rows and columns in the grid. Next N line contains. M characters each. An 'X' in position (i,j) denotes that the cell is blocked and ans 'O' denotes that the cell is empty.

Constraints
1<=N,M<=1000 GRID(i,j)='X' or 'O'

Output Format
If a solution exists: Print N lines, containing M integers each. A 1 at a position (i,j) denotes that the (i,j)th cell is covered in the path and a 0 denotes that the cell is not covered in the path.
If solution doesn't exist, just print "-1".

Sample Input
5 4
OXOO
OOOX
OOXO
XOOO
XXOO
Sample Output
1 0 0 0 
1 1 0 0 
0 1 0 0 
0 1 1 1 
0 0 0 1 
*/

#include<iostream>
using namespace std;

bool visited[1001][1001],solution[1001][1001];
bool RatinMaze(char maze[][1001], int i,int j,int m, int n){
    
    if(i==m && j==n){
        solution[i][j] = 1;
        for(int x=0;x<=m;x++){
            for(int y=0;y<=n;y++){
                cout<<solution[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    if(visited[i][j]){
        return false;
    }
    
    visited[i][j]=1;
    solution[i][j] = 1;
        if(j+1<=n && !visited[i][j+1]){
                bool rightsuccess = RatinMaze(maze,i,j+1,m,n);
                if(rightsuccess==true){
                    return true;
                }
        }
        if(i+1<=m && !visited[i+1][j]){
                bool downsuccess = RatinMaze(maze,i+1,j,m,n);
                if(downsuccess==true){
                    return true;
                }
        }
    solution[i][j] = 0;
    return false;
}


int main(){
    char maze[1001][1001];
    int n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>maze[i][j];
            if(maze[i][j]=='X')
                visited[i][j]=1;
        }
    }
    m--;
    n--;
    int Y = RatinMaze(maze,0,0,m,n);
    if(Y==false){
        cout<<"-1";
    }
    return 0;
}