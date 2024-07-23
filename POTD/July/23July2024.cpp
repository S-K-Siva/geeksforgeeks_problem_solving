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
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inOrderTraversal(Node *root,multiset<int>& res){
        if(root == NULL) return;
        inOrderTraversal(root->left,res);
        res.insert(root->data);
        inOrderTraversal(root->right,res);
    }
    vector<int> merge(Node *root1, Node *root2) {
        multiset<int> v1;
        inOrderTraversal(root1,v1);
        inOrderTraversal(root2,v1);
        return {v1.begin(),v1.end()};
        
    }
};