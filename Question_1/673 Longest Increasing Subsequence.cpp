/*
Problem:
    673. 最长递增子序列的个数
Author:
	LQP
Modify:
	2021-09-20
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {1,3,5,4,7};
    int length = 1, now_length = 1;
    if(nums.size() == 0){
        cout << '0' << endl;
        return 0;
    }
        
    
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] <= nums[i+1])
            now_length++;
        else
            now_length = 1;
        if(length < now_length)
            length = now_length;
    }
    cout << length << endl;
    return length;
}