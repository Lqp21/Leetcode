/*
Problem:
    589. N 叉树的后序遍历
Author:
	LQP
Modify:
	2022-03-12
*/ 

#include<iostream>
#include<vector>

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

void creat_tree(vector<int> &num, Node* &root);
void posttraversal_tree(const Node* root, vector<int> &nums);

int main()
{
    vector<int> tree = {1,0,2,3,4,5,0,0,6,7,0,8,0,9,10,0,0,11,0,12,0,13,0,0,14};
    Node *root;
    vector<int> nums;
    creat_tree(tree, root);
    posttraversal_tree(root, nums);
    for(int i = 0; i < nums.size(); i++)
        cout << nums[i] << ' ';
    cout << endl;
    return 0;
}

void creat_tree(vector<int> &num, Node* &root)
{
    int j = -1;
    int index = 0;
    vector<Node*> position;
    while(index < num.size()){
        if(num[index]){
            Node* ptr = new Node(num[index]);
            position.push_back(ptr);
            if(j>=0) position[j]->children.push_back(ptr);
        }
        else j++;
        index++;
    }
    root = position[0];
}

void posttraversal_tree(const Node* root, vector<int> &nums)
{
    if(root){
        for(int i = 0; i < root->children.size(); i++)
            posttraversal_tree(root->children[i], nums);
        nums.push_back(root->val);
    } 
}