#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = right= NULL;
    }
};

class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    
    void solve(Node* root, int index, set<int>& allIndex){
        if(root == NULL) return;
        allIndex.insert(index);
        solve(root->left,index-1,allIndex);
        solve(root->right,index+1,allIndex);
    }
    int verticalWidth(Node* root) {
        
        // own approach... 
        
        // intution : calculate and add total number of left view and right view nodes
        // of binary tree, but it's wrong, I am not taking edge cases of intermediate nodes
        
        // int left_cnt = 0;
        // int right_cnt = 0;
        // // calculate left view
        // Node *temp;
        // temp =root;
        // while(temp != NULL){
        //     ++left_cnt;
        //     temp = temp->left;
        // }
        // // calculate right view
        // temp =root;
        // while(temp != NULL){
        //     ++right_cnt;
        //     temp = temp->right;
        // }
        // int res = (left_cnt + right_cnt) - 1;
        // if(res <= 0) return 0;
        // return res;
        
        // Optimal approach
        // indexing each node
        // root : 0
        // root->left : root_index - 1
        // root->right : root_index + 1
        set<int> allIndex;
        solve(root,0,allIndex);
        return allIndex.size();
        
    }
};