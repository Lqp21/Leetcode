/*
Problem: 
    406. 根据身高重建队列
Author:
	LQP
Modify:
	2021-09-10

*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> people = {{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    vector<vector<int>> QueuePeople;

    for(int i = 0; i < people.size() - 1; i++)
    {
        for(int j = 0; j < people.size() - i - 1; j++)
        {
            vector<int> Exchange;
            if(people[j][1] < people[j+1][1])
            {
                Exchange = people[j+1];
                people[j+1] = people[j];
                people[j] = people[j+1];
            }
        } 
    }
    
}