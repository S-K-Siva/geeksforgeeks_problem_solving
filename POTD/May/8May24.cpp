#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    
    void helper(vector<vector<int>>& result,vector<int>path,Node* root){
        if(root == NULL) return;
        path.push_back(root->data);
        if(root->left == NULL && root->right == NULL){
            result.push_back(path);
            return;
        }
        helper(result,path,root->left);
        helper(result,path,root->right);
    }
    vector<vector<int>> Paths(Node* root) {
        vector<int> track;
        vector<vector<int>> result;
     
        helper(result,track,root);
        return result;
    }
};