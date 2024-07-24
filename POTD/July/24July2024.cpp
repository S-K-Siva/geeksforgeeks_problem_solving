#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inOrder(Node* root,set<int>& ml, vector<int>& vv){
        if(root == NULL) return;
        inOrder(root->left,ml,vv);
        ml.insert(root->data);
        vv.push_back(root->data);
        inOrder(root->right,ml,vv);
    }
    bool isBST(Node* root) {
        set<int> ml;
        vector<int> vv,vv1;
        inOrder(root,ml,vv);
        vv1 = vector<int>(ml.begin(),ml.end());
        return vv1 == vv;
    }
};
// recursion way!

// bool isBSTUtil(Node* node, int min, int max) {
//     // An empty tree is a BST
//     if (node == nullptr) {
//         return true;
//     }

//     // False if this node violates the min/max constraint
//     if (node->data < min || node->data > max) {
//         return false;
//     }

//     // Otherwise check the subtrees recursively, tightening the min or max constraint
//     return isBSTUtil(node->left, min, node->data - 1) && 
//            isBSTUtil(node->right, node->data + 1, max);
// }

// bool isBST(Node* root) {
//     return isBSTUtil(root, INT_MIN, INT_MAX);
// }