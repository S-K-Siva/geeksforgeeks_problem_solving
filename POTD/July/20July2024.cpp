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


// Return the root of the modified tree after removing all the half nodes.
class Solution {
public:
    Node* RemoveHalfNodes(Node* root) {
        return dfs(root);
    }

private:
    Node* dfs(Node* root) {
        if (root == nullptr)
            return nullptr;

        root->left = dfs(root->left);
        root->right = dfs(root->right);

        // Leaf node
        if (root->left == nullptr && root->right == nullptr)
            return root;

        if (root->left == nullptr || root->right == nullptr) {
            Node* curr_root = (root->left == nullptr) ? root->right : root->left;
            return curr_root;
        }

        return root;
    }
};