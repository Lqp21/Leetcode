/*
Problem: 
    326. 3的幂 Easy
Author:
	LQP
Modify:
	2021-09-23
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n = -3;
    while(n>=3){
        if(n%3){
            cout << "false" << endl;
            return false;
        }
        n = n/3;
    }  
    if(n==1){
        cout << "true" << endl;
        return true;
    }  
    else{
        cout << "false" << endl;
        return false;
    }     
}