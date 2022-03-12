/*
Problem:
    553. Optimal Division
Author:
	LQP
Modify:
	2022-02-27
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    vector<int> nums = {2,3};
    string nums_str;
    int n = nums.size();
    nums_str = to_string(nums[0]);
    if(n == 2) nums_str = nums_str + "/" + to_string(nums[1]);
    if(n > 2){
        for(int i = 1; i < n; i++){
            nums_str = nums_str + "/";
            if(i==1) nums_str = nums_str + "(";
            nums_str = nums_str + to_string(nums[i]);
        }
        nums_str = nums_str + ")";
    }
    cout << nums_str << endl;
    return 0;

}