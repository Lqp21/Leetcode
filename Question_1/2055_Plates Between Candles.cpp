/*
Problem:
    2055. 蜡烛之间的盘子
Author:
	LQP
Modify:
	2022-03-08
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main()
{
    // string s = "**|**|***|";
    // vector<vector<int>> queries = {{2,5},{5,9}};
    
    string s = "***|**|*****|**||**|*";
    vector<vector<int>> queries = {{1,17},{4,5},{14,17},{5,11},{15,16}};    

    vector<int> answer(queries.size());
    int n = s.size();
    vector<int> persum(n);
    int sum = 0;
    vector<int> left(n), right(n);

    for(int i = 0; i < n; i++){
        if(s[i] == '*') sum++;
        persum[i] = sum;
    }
    for(int i = n-1, l = -1; i >=0 ; i--){
        if(s[i] == '|') l = i;
        left[i] = l;
    }
    for(int i = 0, r = -1; i < n; i++){
        if(s[i] == '|') r = i;
        right[i] = r;
    }

    for(int i = 0; i < queries.size(); i++){
        if((left[queries[i][0]]>=0)&&(right[queries[i][1]]>=0)&&(left[queries[i][0]] < right[queries[i][1]]))
            answer[i] = persum[right[queries[i][1]]] - persum[left[queries[i][0]]];
        else answer[i] = 0;
    }
    for(int i = 0; i < persum.size(); i++)
        cout << persum[i] << ' ';
    cout << endl;
    for(int i = 0; i < left.size(); i++)
        cout << left[i] << ' ';
    cout << endl;
    for(int i = 0; i < right.size(); i++)
        cout << right[i] << ' ';
    cout << endl;
    for(int i = 0; i < answer.size(); i++)
        cout << answer[i] << ' ';
    return 0;


}


// int main()
// {
//     string s = "**********";
//     vector<vector<int>> queries = {{2,5},{5,9}};
//     vector<int> answer;
//     int left = 0, right = 0;
//     for(int i = 0; i < queries.size(); i++){
//         answer.push_back(0);
//         left = s.find('|', queries[i][0]);
//         right = s.rfind('|', queries[i][1]);
//         if(left < right){
//             for(int j = left; j <= right; j++)
//                 if(s[j] == '*') answer[i]++;
//         }
//     }
//     for(int i = 0; i < answer.size(); i++)
//         cout << answer[i] << ' ';
//     return 0;

// }