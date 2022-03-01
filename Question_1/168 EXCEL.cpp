/*
#168. Excel表列名称
给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称。
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int columnNumber = 2147483647, shang = 0, i = 0, nums[15] = {0};
    string target;
    string figure = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    shang = columnNumber;
    while(shang){
        shang -= 1;
        nums[i] = shang % 26 ;
        shang = shang / 26;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        i = nums[j];
        target += figure[i];
    }      
    cout << target << endl;
    return 0;

}