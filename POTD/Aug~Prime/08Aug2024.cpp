#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    int treeTraversal(Node *root){
        if(root == NULL) return 0;
        int left = 0,right = 0;
        left = treeTraversal(root->left);
        right = treeTraversal(root->right);
        if(left == -1 || right == -1) return -1;
        // cout << root->data << "<-->" << (left+right)<<endl;
        if((root->left || root->right) && root->data != left + right){
            return -1;
        }else{
            return root->data + (left + right);
        }
    }
    bool isSumTree(Node* root) {
        int res = treeTraversal(root);
        if(res == -1) return false;
        return true;
    }
};