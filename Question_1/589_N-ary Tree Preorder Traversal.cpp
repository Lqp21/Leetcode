/*
Problem:
    589. N 叉树的前序遍历
Author:
	LQP
Modify:
	2022-03-10
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
void pretraversal_tree(vector<int>* num, Node* root);

int main()
{
    Node* root = new Node;
    vector<int> num_root = {1,0,3,2,4,0,5,6};
    vector<int> res;

    creat_tree(num_root, root);
    cout << root->val << endl;
    pretraversal_tree(&res, root);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
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


void pretraversal_tree(vector<int>* num, Node* root)
{
    if(root){
        num->push_back(root->val);
        for(int i = 0; i < root->children.size(); i++)
            pretraversal_tree(num, root->children[i]);
    }
}