/*
Problem:
    1791. 找出星型图的中心节点
Author:
	LQP
Modify:
	2022-02-18
*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> edges = {{1,2},{2,3},{4,2}};
    int n = edges.size()+1;
    vector<int> nodes(n+1);
    for(int i = 0; i<edges.size(); i++)
    {
        nodes[edges[i][0]]++;
        nodes[edges[i][1]]++;
        if(nodes[edges[i][0]] == n-1) cout << edges[i][0]; 
        if(nodes[edges[i][1]] == n-1) cout << edges[i][1];       
    }

}
