/*
Problem:
    680. 验证回文字符串 Ⅱ(Easy)
Author:
	LQP
Modify:
	2021-09-13

*/

#include<iostream>
#include<string>

using namespace std;
bool Test(string s, int head, int end);

int main()
{
    string s = "abc";
    int a, b;
    a = 0;
    b = s.length() - 1;
    while(a <= b)
    {
        if(s[a] == s[b])
        {
            a++;
            b--;
        }
        else
        {
            cout << (Test(s, a+1, b)||Test(s, a, b-1)) << endl;
            return (Test(s, a+1, b)||Test(s, a, b-1));
        }       
    }
    cout << "true" << endl;
    return true;
}

bool Test(string s, int head, int end)
{
    while(head <= end)
    {
        if(s[head] == s[end])
        {
            head++;
            end--;
        }
        else
            return false;
    }
    return true;
}