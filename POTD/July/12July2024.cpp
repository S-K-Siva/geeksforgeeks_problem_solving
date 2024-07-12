#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
};

/*you are required to
complete this function */
class Solution {
  public:
    bool solve(Node *root, int target){
        if(root == NULL) return false;
        if(target == 0 && root->left == NULL && root->right == NULL){
            return true;
        }
        if(root->left && solve(root->left,target-(root->left->data))){
            return true;
        }
        if(root->right && solve(root->right, target-(root->right->data))){
            return true;
        }
        return false;
    }
    bool hasPathSum(Node *root, int target) {
        if(root)
            return solve(root,target-(root->data));
        return false;
    }
};