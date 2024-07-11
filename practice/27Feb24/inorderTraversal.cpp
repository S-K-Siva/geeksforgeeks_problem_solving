#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    
    void helper(Node *root, vector<int>& res){
        if(root == NULL) return;
        
        helper(root->left,res);
        res.push_back(root->data);
        helper(root->right,res);
    }
    vector<int> inOrder(Node* root) {
        vector<int> result;
        
        helper(root,result);
        return result;
    }
};