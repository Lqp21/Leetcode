/*
Problem:
    717. 1比特与2比特字符
Author:
	LQP
Modify:
	2022-02-20
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> bits = {1, 1, 1, 0};
    bool get;
    int n = bits.size();
    if(bits[n-1]==0&&bits[n-2]==0) get = 1;
    else if(bits[n-1]==0&&bits[n-2]==1){
        int i = n-1;
        while(bits[i-1]&&i) i--;
        if((n-i-1)%2==0) get = 1;
        else get = 0;
    }
    else get = 0;
    
    cout << get << endl;
}