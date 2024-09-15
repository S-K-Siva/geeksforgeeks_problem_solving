#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    Node *prev,*next;
    Solution(){
        prev = nullptr;
        next = nullptr;
    }
    
    void solve(Node *node){
        if(node == nullptr) return;
        solve(node->left);
        if(!prev) prev = node;
        if(next) next->right = node;
        node->left = next;
        next = node;
        solve(node->right);
    }
    Node* bToDLL(Node* root) {
        solve(root);
        return prev;
    }
};
