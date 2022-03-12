/*
Problem:
    2049. 统计最高分的节点数目
Author:
	LQP
Modify:
	2022-03-11
*/ 

#include<iostream>
#include<vector>

using namespace std;
void Num_Node(const int &root,const vector<int> &l_child,const vector<int> &r_child,vector<int> &num);

int main()
{
    vector<int> parents = {-1,2,0,2,0};
    int len = parents.size();
    vector<int> l_child(len), r_child(len), num_node(len);
    int nums = 0;
    long long score = 0, h_score = 0;

    for(int i = 0; i < len; i++){
        if(parents[i] >= 0){
            if(l_child[parents[i]] > 0) r_child[parents[i]] = i;
            else l_child[parents[i]] = i;
        }
    }
    Num_Node(0, l_child, r_child, num_node);

    for(int i = 0; i < len; i++)
        cout <<l_child[i] << ' '
             <<r_child[i] << ' '
             <<num_node[i] << endl;
    
    for(int i = 0; i < len; i++)
    {
        score = 1;
        if(parents[i] != -1)
            score *= (num_node[0]-num_node[i]);
        if(l_child[i]) score *= num_node[l_child[i]];
        if(r_child[i]) score *= num_node[r_child[i]];
        cout << score << endl;
        if(h_score < score){
            h_score = score;
            nums = 0;
        }
        if(h_score == score) nums++;
    }
    

    cout << endl << h_score
         << endl << nums << endl;
    
    return 0;
}

void Num_Node(const int &root, 
              const vector<int> &l_child,
              const vector<int> &r_child,
              vector<int> &num)
{
    num[root] = 1;
    if(l_child[root]){
        Num_Node(l_child[root], l_child, r_child, num);
        num[root] = num[root] + num[l_child[root]];
    }
    if(r_child[root]){
        Num_Node(r_child[root], l_child, r_child, num);
        num[root] = num[root] + num[r_child[root]];
    }
}