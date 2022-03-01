


#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums;
    int val = 5;
    int number = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] != val){
            nums[number] = nums[i];
            number++;
        }
    }
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i];
    }   
    cout << endl << number;
    return number;
}