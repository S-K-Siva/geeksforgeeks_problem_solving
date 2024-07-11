#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int helper(Node *root){
     
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }
    int left = root->data,right = root->data;
    if(root->left)
        left = helper(root->left);
    if(root->right)
        right = helper(root->right);
    return min(left,right);
}
int minValue(Node* root) {
    if(root == NULL) return -1;
    if(root->left == NULL) return root->data;
    return helper(root->left);
}