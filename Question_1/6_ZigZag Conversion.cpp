/*
Problem:
    6. Z 字形变换
Author:
	LQP
Modify:
	2022-03-01
*/

#include <iostream>
#include <vector>


using namespace std;

int main()
{
    string s = "AB";
    int numRows = 1;
    string res;
    int len = s.length();
    int numZ = len/numRows + (len%numRows != 0);
    int t1 = 0, t2 = 0;
    if(numRows==1){
        cout << s.c_str() << endl;
        return 0;
    }
    for(int j = 0; j < numRows; j++){
        for(int i = 0; i < numZ; i++){
            t1 = 2*i*(numRows-1)+j;
            t2 = 2*i*(numRows-1)+2*numRows-2-j;
            if(t1>=len)  continue;
            if(j==0||j==(numRows-1)) res += s[t1];
            else
            {
                res += s[t1];
                if(t2>=len)  continue;
                res += s[t2];
            }
        }
    }
    cout << res.c_str() << endl;
    return 0;
}