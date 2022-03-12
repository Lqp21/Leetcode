/*
Problem:
    564. Find the Closest Palindrome
Author:
	LQP
Modify:
	2022-03-02
*/

#include <iostream>
#include <string>

using namespace std;
void Make_Palindrome(string &pal, const string &str);
bool Proof_Palindrome(const string &str);


int main()
{
    string n = "10";
    string res;
    int num1=0, num2=0;
    num1=num2=stoi(n);
    while(1){    
        res = to_string(--num1);
        if(Proof_Palindrome(res)){cout << res;return 0;}
        res = to_string(++num2);
        if(Proof_Palindrome(res)){cout << res;return 0;}
    }
    cout << "end" << endl;
    return 0; 
}


// int main()
// {
//     string n = "123";
//     string res;
//     int len_n = n.length();
//     int t = len_n/2;
//     if(len_n%2){
//         if(Proof_Palindrome(n)){
//             n[t] = n[t]-1;
//             Make_Palindrome(res, n);
//         }
//         else Make_Palindrome(res, n);
//     }
//     else{
//         if(Proof_Palindrome(n)){
//             n[t-1] = n[t-1]-1;
//             Make_Palindrome(res, n);
//         }
//         else Make_Palindrome(res, n);   
//     }
//     cout << res << endl;
//     return 0; 
// }

void Make_Palindrome(string &pal, const string &str)
{
    pal = str;
    int i = 0, j = str.length()-1;
    for(;i<=j;i++,j--)
        pal[j] = pal[i];
}

bool Proof_Palindrome(const string &str)
{
    int i = 0, j = str.length()-1;
    for(;i<=j;i++,j--)
        if(str[i]!=str[j]) return false;
    return true;
}