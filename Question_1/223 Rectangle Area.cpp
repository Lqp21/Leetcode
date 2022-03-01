/*
Problem:
    223. 矩形面积
Author:
	LQP
Modify:
	2021-09-30
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int ax1 = -2, ay1 = -2, ax2 = 2, ay2 = 2, bx1 = -2, by1 = -2, bx2 = 2, by2 = 2;
    int S_one = 0, S_two = 0, S = 0;
    int x1, x2, y1, y2;
    S_one = (ax2-ax1)*(ay2-ay1);
    S_two = (bx2-bx1)*(by2-by1);
    x1 = max(ax1, bx1);
    x2 = min(ax2, bx2);
    y1 = max(ay1, by1);
    y2 = min(ay2, by2);
    if(x1<x2&&y1<y2)
        S = (x2-x1)*(y2-y1);
    cout << S_one+S_two-S << endl;
    return S_one+S_two-S;
}