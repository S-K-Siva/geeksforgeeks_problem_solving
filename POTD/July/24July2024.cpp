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