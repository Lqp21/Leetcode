/*
Problem:
    633. 平方数之和
Author:
	LQP
Modify:
	2021-09-13
*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    unsigned int c = 2147482647;
    unsigned int a = 0, b = 0; 
    bool ans = 0;
    b = (unsigned int)sqrt(c);
    cout << b << endl;
    while(a <= b)
    {
        if(a*a+b*b < c)
            a++;
        else if(a*a+b*b > c)
            b--;
        if(a*a+b*b == c)
        {
            ans = 1;
            break;
        }
    }
    cout << ans << endl;
    return 0; 
}