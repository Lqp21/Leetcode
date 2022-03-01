#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums1 = {0}, nums2 = {};
    int m = 0, n = 0;

    for(int length = m+n-1, i = m - 1, j = n - 1; length >= 0; )
    {
        if(i < 0) 
        {
            nums1[length] = nums2[j];
            j--;
            length--;
        }
        if(j < 0) 
        {
            nums1[length] = nums1[i];
            i--;
            length--;
        }
        if(i >= 0 && j >= 0)
        {
            if(nums1[i] >= nums2[j])
            {
                nums1[length] = nums1[i];
                i--;
                length--;
            }
            if(nums1[i] < nums2[j])
            {
                nums1[length] = nums2[j];
                j--;
                length--;
            }
        }
    }
    for(int i = 0; i < nums1.size(); i++)   
    {
        cout << nums1[i];
    } 
    return 0;
}