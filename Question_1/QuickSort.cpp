#include<iostream>
#include<vector>

using namespace std;

void Exchange(int num1, int num2);
int Partition (vector<int>& nums,int p,int r);
void QuickSort (vector<int>& nums,int p,int r);

int main()
{
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};

    QuickSort(nums, 0, nums.size()-1);
    for(int i = 0; i < nums.size(); i++)   
    {
        cout << nums[i];
    } 
    return 0;
}

void Exchange(int num1, int num2)
{
    int i = 0;
    i = num1;
    num1 = num2;
    num2 = i;
}

int Partition (vector<int>& nums,int p,int r)
{
    int x , i;
    x = nums[r];
    i = p - 1;
    for(int j = p; j < r; j++)
    {
        if(nums[j] <= x)
        {
            i = i + 1;
            Exchange(nums[i], nums[j]);
        }
    }
    Exchange(nums[i+1], nums[r]);
    return i+1;
}

void QuickSort (vector<int>& nums,int p,int r)
{
    int q = 0;
    if(p < r)
    {
        q = Partition(nums, p, r);
        QuickSort(nums, p, q-1);
        QuickSort(nums, q+1, r);
    }
}