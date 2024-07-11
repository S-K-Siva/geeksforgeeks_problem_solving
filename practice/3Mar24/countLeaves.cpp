#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
   
   
void helper(Node* root, vector<int>& value){
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        value[0] += 1;
        return;
    }
    
    helper(root->left,value);
    helper(root->right,value);
}
int countLeaves(Node* root)
{
    
    vector<int> result(1,0);
    helper(root,result);
    return result[0];
}