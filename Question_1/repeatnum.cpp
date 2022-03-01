#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>  nums = {4,2};
    bool flag;
    cout.setf(ios_base::boolalpha); 
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            flag = (nums[i] == nums[j]);
            if(flag)
            {
                cout << flag << endl;  
                return flag;
            } 
            
        }  
    }
    cout << flag << endl;  
    return flag;
}