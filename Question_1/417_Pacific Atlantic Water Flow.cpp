/*
Problem:
    417. 太平洋大西洋水流问题
Author:
    LQP
Modify:
	2021-09-20
使用递归实现深度优先搜索算法，分别对二位数组的四个边上的元素进行搜索
*/

#include<iostream>
#include<vector>

using namespace std;
void defs(vector<vector<int>>& defs_heights, int defs_m, int defs_n, vector<vector<bool>>& defs_reach);
vector<int> direction{-1, 0, 1, 0, -1};

int main()
{
    
    vector<vector<int>> heights = 
        {{1, 2, 2, 3, 5},
         {3, 2, 3, 4, 4},
         {2, 4, 5, 3, 1},
         {6, 7, 1, 4, 5},
         {5, 1, 1, 2, 4}};
    vector<vector<int>> ans;
    int m = heights.size(), n = heights[0].size(); 
    vector<vector<bool>>  can_reach_p(m, vector<bool>(n, false));
    vector<vector<bool>>  can_reach_a(m, vector<bool>(n, false));

   for(int i = 0; i < n; i++){
        if(!can_reach_p[0][i]){
            defs(heights, 0, i, can_reach_p);
        }
        if(!can_reach_a[m-1][i]){
            defs(heights, m-1, i, can_reach_a);
        }
    }
    

    for(int i = 0; i < m; i++){
        if(!can_reach_p[i][0]){
            defs(heights, i, 0, can_reach_p);
        }
        if(!can_reach_a[i][n-1]){
            defs(heights, i, n-1, can_reach_a);
        }
    }

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++)
    //         cout << boolalpha << can_reach_p[i][j] << " ";
    //     cout << endl;
    // }
    // cout << "###################" << endl;
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++)
    //         cout << boolalpha << can_reach_a[i][j] << " ";
    //     cout << endl;
    // }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            if(can_reach_p[i][j]&&can_reach_a[i][j])
                ans.push_back({i,j});
    }
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1];
        cout << endl;
    }

    return 0;
}

void defs(vector<vector<int>>& defs_heights, int defs_m, int defs_n, vector<vector<bool>>& defs_reach)
{
    int x = 0, y = 0;
    defs_reach[defs_m][defs_n] = true;
    for(int i = 0; i < 4; i++){
        x = defs_m + direction[i];
        y = defs_n + direction[i+1];
        if(x>=0&&x<defs_heights.size()&&y>=0&&y<defs_heights[0].size()&&!defs_reach[x][y]&&defs_heights[x][y]>=defs_heights[defs_m][defs_n]){
            defs(defs_heights, x, y, defs_reach);
        }
    }
}