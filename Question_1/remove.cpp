#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int number = 0;
    if(nums.size() == 0){
        cout << 0;
        return 0;
    }   
    for(int i = 0; i < nums.size(); i++){
        if(nums[number] != nums[i]){
            number++;
            nums[number] = nums[i];
        }
    }
    cout << number+1 << endl;
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i];
    }
    return number+1;
}