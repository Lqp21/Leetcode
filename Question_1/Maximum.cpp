#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    vector<int> nums = {-2,-1};
    int sums[20] = {0};
    int max_num = 1, min_num = 1;
    for(int i = 0; i < nums.size(); i++){
        sums[i+1] = sums[i] + nums[i];
        if(sums[i+1] >= sums[max_num]) max_num = i+1;
        if(sums[i+1] <= sums[min_num]) min_num = i+1;
    }
    if(max_num > min_num && sums[min_num] < 0){
        cout << sums[max_num]-sums[min_num] << endl;  
        
        return sums[max_num]-sums[min_num];
    }
    else{
        cout << sums[max_num] << endl;
        return sums[max_num];
    }   
}