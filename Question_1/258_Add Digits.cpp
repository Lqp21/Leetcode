/*
Problem:
    258. 各位相加
Author:
	LQP
Modify:
	2022-03-03
*/

#include <iostream>

using namespace std;

int main()
{
    int num = 9;
    if(!num) cout <<  num;
    if(!(num%9)) 
        cout << 9;
    else 
        cout << num%9;
    return 0;
}

// int Sum(int num);

// int main()
// {
//     int num = 12345;
//     int res = Sum(num);
//     cout << res << endl;
//     return 0;
// }

// int Sum(int num)
// {
//     int s;
//     while(num)
//     {    
//         s += num%10;
//         num = num/10;
//     }
//     if(s<10) return s;
//     else num = s;
//     return Sum(num);
// }