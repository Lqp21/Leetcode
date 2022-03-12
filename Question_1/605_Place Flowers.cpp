/*
Problem: 
    605. 种花问题
Author:
	LQP
Modify:
	2021-09-10
从左到右寻找连续三个空地在中间种花
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> flowerbed = {1,0,0,0,1};
    int n = 2, one = 0, two = 0, three = 0;
    bool ans = 0;
    one = two - 1;
    three = two + 1;

    for(; two < flowerbed.size(); two++)
    {
        one = two - 1;
        three = two + 1;
        if(one <= 0)
            one = 0;
        if(three >= flowerbed.size())
            three = flowerbed.size() - 1;
        if(flowerbed[one] == 0&&flowerbed[two] == 0&&flowerbed[three] == 0)
        {
            flowerbed[two] = 1;
            n--;
        }
    }
    if(n <= 0)
        ans = 1;
    for(int i = 0; i < flowerbed.size(); i++){
        cout << flowerbed[i];
    }   
    cout << endl << ans;
    return ans;
}