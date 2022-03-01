/*
Problem:
    1020. 飞地的数量(M)
Author:
	LQP
Modify:
	2022-2-12

*/

#include<iostream>
#include<vector>

using namespace std;

vector<int> direction{-1, 0, 1, 0, -1};

void Clear_Land(int x,int y,int m,int n,vector<vector<int>> &grid);

int main()
{
    vector<vector<int>> grid = 
    // {{0,0,0,0},
    //  {1,0,1,0},
    //  {0,1,1,0},
    //  {0,0,0,0}};
    {{0,1,1,0},
     {0,0,1,0},
     {0,0,1,0},
     {0,0,0,0}};
    int m = 0, n = 0, Enclaves = 0;
    m = grid.size();
    n = grid[0].size();

    for(int i=0; i<n; i++){
        Clear_Land(  0,i,m,n,grid);
        Clear_Land(m-1,i,m,n,grid); 
    }
        
    for(int i=0; i<m; i++){
        Clear_Land(i,  0,m,n,grid);
        Clear_Land(i,n-1,m,n,grid);
    }   
    
    for(int i=1;i<m-1;i++)
        for(int j=1;j<n-1;j++)
            if(grid[i][j] == 1) Enclaves++;
    cout << Enclaves;
}

void Clear_Land(int x,int y,int m,int n,vector<vector<int>> &grid)
{
    int next_x = 0, next_y = 0;
    if(x>=0 && x<m && y>=0 && y<n){
        if(grid[x][y] == 1){
            grid[x][y] = 0;
            for(int i = 0; i < 4; i++)
            {
                next_x = x + direction[i];
                next_y = y + direction[i+1];
                Clear_Land(next_x,next_y,m,n,grid);
            }     
        }
    }
}