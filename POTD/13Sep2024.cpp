#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if(node == nullptr) return;
        Node *left, *right;
        left = node->left;
        right = node->right;
        
        Node *temp;
        temp = left;
        left = right;
        right = temp;
        node->left = left;
        node->right = right;
        mirror(node->left);
        mirror(node->right);
    }
};
