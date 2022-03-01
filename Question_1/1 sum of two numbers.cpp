#include<iostream>

using namespace std;

int main(){
    int nums[] = {3,2,4}, target = 6;
    int i = 0,j = 0;
    for(i = 0;i < sizeof(nums) ;i++)
        for(j = i + 1;j < sizeof(nums);j++){
            if(nums[i]+nums[j] == target){
                cout<<"["<<i<<","<<j<<"]"<<endl;
                return 0;
            }
        }
} 