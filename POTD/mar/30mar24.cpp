#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

class Solution {
  public:
    
    void helper(vector<int>& res,Node* root){
        if(root == NULL) return;
        res[0] = min(res[0],root->data);
        helper(res,root->left);
        helper(res,root->right);
    }
    int minValue(Node* root) {
        if(root->left == NULL){
            return root->data;
        }
        vector<int> arr(1,INT_MAX);
        helper(arr,root->left);
        return arr[0];
    }
};