/*
Problem:
    292. Nim 游戏
Author:
	LQP
Modify:
	2021-09-13
Solution:
当未取的石头为4的倍数的时候先手输
*/

#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    bool ans;
    ans = n%4;
    cout << boolalpha  << ans << endl;
    return 0;
}