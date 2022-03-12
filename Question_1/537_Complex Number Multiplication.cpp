/*
Problem:
    537. Complex Number Multiplication
Author:
	LQP
Modify:
	2022-02-25
*/

#include<iostream>
#include<string>


using namespace std;
void num2str (int num, string& str);

int main()
{
    string num1 = "2+3i", num2 = "1+1i";
    string num3, str3_Re, str3_Im;
    int num1_Re = 0, num1_Im = 0;
    int num2_Re = 0, num2_Im = 0;
    int num3_Re = 0, num3_Im = 0;
    char t = '0';
    int i = 0, w = 1;
    t = num1[i];
    while(t != '+')
    {  
        if(t == '-') 
            w = -1;
        else
            num1_Re = num1_Re*10 + t - '0';
        t = num1[++i]; 
    }
    num1_Re = num1_Re*w; w = 1;
    t = num1[++i];
    while(t != 'i')
    {
        if(t == '-') 
            w = -1;
        else
            num1_Im = num1_Im*10 + t - '0';
        t = num1[++i];
    }
    num1_Im = num1_Im*w; w = 1;

    i = 0; w = 1; t = num2[i];
    while(t != '+')
    {
        if(t == '-')
            w = -1;
        else
            num2_Re = num2_Re*10 + t - '0';
        t = num2[++i];
    }
    num2_Re = num2_Re*w; w = 1;
    t = num2[++i];
    while(t != 'i')
    {
        if(t == '-')
            w = -1;
        else
            num2_Im = num2_Im*10 + t - '0';
        t = num2[++i];
    }
    num2_Im = num2_Im*w; w = 1;

    cout << num1_Re << " " << num1_Im << endl;
    cout << num2_Re << " " << num2_Im << endl;

    num3_Re = num1_Re*num2_Re-num1_Im*num2_Im;
    num3_Im = num1_Re*num2_Im+num1_Im*num2_Re;
    num2str(num3_Re,str3_Re);
    num2str(num3_Im,str3_Im);
    
    cout << num3_Re << "_" << num3_Im << endl;
    cout << "Re: " << str3_Re << endl;
    cout << "Im: " << str3_Im << endl;
    num3 = num3_Re + '+' + num3_Im + 'i';
    cout << num3 << endl;

    return 0;

}

void num2str (int num, string& str)
{
    string str_d;
    int i = -1, j = 0, t = 0;
    if(num < 0){
        str[j++] = '-';
        num *= -1;
    } 
    if(num == 0) str[j++] = '0';
    while(num)
    {
        t = num%10;
        num = num/10;
        str_d[++i] = t + '0';
    }
    for(;i>=0;i--,j++)
        str[j] = str_d[i];
    str[j] = '\0';
}