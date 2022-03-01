/*
Problem:
    162. 寻找峰值
Author:
	LQP
Modify:
	2021-09-15
实现时间复杂度为 O(log n) 的算法来解决此问题
使用二分查找，寻找导数为零的峰值
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {1,2,1,3,5,6,4};
    int l = 0, r = 0;
    int mid = 0;
    r = nums.size() - 1;
    while(l<r)
    {
        mid = (l+r)/2;
        if(nums[mid] < nums[mid+1])
            l = mid+1;
        if(nums[mid] > nums[mid+1])
            r = mid;
    }
    cout << l << endl;
    return l;
}
