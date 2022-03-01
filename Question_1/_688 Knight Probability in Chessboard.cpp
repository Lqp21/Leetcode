/*
Problem:
    688. 骑士在棋盘上的概率
Author:
	LQP
Modify:
	2022-02-17
*/


// 超时
// #include<iostream>
// #include<vector>
// #include<math.h>

// using namespace std;

// void def(int n, int k, int row, int column, int &num);
// vector<int> next_r = {-2,-1, 1, 2, 2, 1,-1,-2};
// vector<int> next_c = { 1, 2, 2, 1,-1,-2,-2,-1};

// int main()
// {
//     int n = 8, k = 30, row = 6, column = 4;
//     int num = 0;    
//     float g = 0;
//     def(n, k, row, column, num);
//     g = num/pow(8,k);
//     cout << num << endl
//          << g   << endl;
// }

// void def(int n, int k, int row, int column, int &num)
// {
//     if(row>=0&&row<n&&column>=0&&column<n)
//     {
//         if(k==0) 
//         {
//             num++;
//             cout << '(' << row << ',' << column << ')' << endl;
//         }
//         if(k>0)
//         {
//             k--;
//             for(int i=0; i<8; i++)
//                 def(n, k, row+next_r[i], column+next_c[i], num); 
//         }
//     }
// }
