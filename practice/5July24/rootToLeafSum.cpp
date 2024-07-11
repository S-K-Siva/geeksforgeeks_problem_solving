#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
};
class Solution {
  public:
    
    bool solve(Node *root, int cur, int s){
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL){
            if(s == cur){
                return true;
            }
            return false;
        }
        if(root->left && solve(root->left,cur + (root->left->data),s)){
            return true;
        }
        if(root->right && solve(root->right,cur + (root->right->data),s)){
            return true;
        }
        return false;
    }
    bool hasPathSum(Node *root, int s) {
        return solve(root, root->data, s);
    }
};