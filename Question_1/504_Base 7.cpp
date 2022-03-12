/*
Problem: 
    504. 七进制数
Author:
	LQP
Modify:
	2022-03-07
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int num = 0;
    vector<int> v_res;
    string res;
    while(num){
        v_res.push_back(num%7);
        num /= 7;
    }
    for(int i = v_res.size()-1; i >= 0; i--)
        num = num*10 + v_res[i];
    res = to_string(num);
    cout << res << endl;
    return 0;

}