/*
Problem: 
    452. 用最少数量的箭引爆气球
Author:
	LQP
Modify:
	2021-09-10
*/
//    {{10,16},{2,8},{1,6},{7,12}};
//    {{1,2},{2,3},{3,4},{4,5}}
//    {{-1,1},{0,1},{2,3},{1,2}}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> Intersection(vector<int>& section1, vector<int>& section2);

int main()
{
    vector<vector<int>> points = {{7,15},{6,14},{8,12},{3,4},{4,13},{6,14},{9,11},{6,12},{4,13}};
    int numPoints = 0;
    vector<int> pointSection, exchange;

/*
    for(int i = 0; i < points.size()-1; i++)
    {
        for(int j = 0; j < points.size()-i-1; j++)
        {
            if(points[j][0] > points[j+1][0])
            {
                exchange = points[j+1];
                points[j+1] = points[j];
                points[j] = exchange;
            }
        }
    }
    */
    sort(points.begin(), points.end(), [](const vector<int>& u, const vector<int>& v) 
    {
        return u[0] < v[0];
    });

    pointSection = points[0];
    for(int i=0; i< points.size(); i++)//输出二维动态数组 
    {
        for(int j=0;j<points[i].size();j++)
        {
            cout<<points[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i = 1; i < points.size(); i++)
    {
        pointSection = Intersection(pointSection,points[i]);
        for(int j = 0; j < pointSection.size(); j++){
            cout << pointSection[j];
        }   
        cout << endl; 
        if(pointSection.size() == 0)
        {
            numPoints++;
            pointSection = points[i];
        }
    }
    if(pointSection.size() != 0)
    {
        numPoints++;
    }
    cout << numPoints;
    return 0;
}

vector<int> Intersection(vector<int>& section1, vector<int>& section2)
{
    vector<int> ansSection;
    if(section1[1] >= section2[0])
    {
        if(section1[0] <= section2[0])
            ansSection.push_back(section2[0]);
        else
            ansSection.push_back(section1[0]);
        if(section1[1] >= section2[1])
            ansSection.push_back(section2[1]);
        else
            ansSection.push_back(section1[1]);
    }
    return ansSection;
}