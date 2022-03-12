/*
Problem:
    798. 得分最高的最小轮调
Author:
	LQP
Modify:
	2022-03-09
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums = {6,2,8,3,5,2,4,3,7,6};
    int len = nums.size();
    vector<int> diff(len);
    int left = 0, right = 0;

    for(int i = 0; i < len; i++){
        left = (i+1)%len;
        right = (i+len-nums[i]+1)%len;
        diff[left]++;
        diff[right]--;
        if(left > right) diff[0]++;
    }
    int bestIndex = 0;
    int maxScore = 0;
    int score = 0;
    for (int i = 0; i < len; i++) {
        score += diff[i];
        cout << score << endl;
        if (score > maxScore) {
            bestIndex = i;
            maxScore = score;
        }
    }
    cout << endl;
    cout << maxScore << endl;
    cout << bestIndex << endl;
    return bestIndex;
}
