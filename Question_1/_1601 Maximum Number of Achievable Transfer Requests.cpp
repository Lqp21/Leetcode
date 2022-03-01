/*
Problem:
    1601. Maximum Number of Achievable Transfer Requests
Author:
	LQP
Modify:
	2022-02-28
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = 3;
    vector<vector<int>> requests={{0,0},{1,2},{2,1}};
    // {{0,1},{1,0},{0,1},{1,2},{2,0},{3,4}};
    // {{0,0},{1,2},{2,1}};
    vector<int> build(n);
    int num = requests.size();
    for(int i=0; i<requests.size(); i++){
        if(requests[i][0]!=requests[i][1]){
            build[requests[i][0]]--;
            build[requests[i][1]]++;
        }
        else num--;
    }
    for(int i=0; i<n; i++)
        if(build[i] == -1) num--;

    cout << num << endl;

    return 0;
}