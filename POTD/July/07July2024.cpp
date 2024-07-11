#include<bits/stdc++.h>
using namespace std;


struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};


class Solution {
  public:
    // Function should return all the ancestor of the target node
    
    bool solve(vector<int>& anchestors, struct Node *root, int target){
        if(root == NULL){
            return false;
        }
        if(target == root->data){
            return true;
        }
        if(solve(anchestors, root->left,target)){
            anchestors.push_back(root->data);
            return true;
        }
        if(solve(anchestors, root->right, target)){
            anchestors.push_back(root->data);
            return true;
        }
        return false;
    }
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int> anchestors;
        bool found = solve(anchestors, root, target);
        return anchestors;
    }
};