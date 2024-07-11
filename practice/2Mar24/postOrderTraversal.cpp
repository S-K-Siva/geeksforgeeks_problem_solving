#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; 

//Function to return a list containing the postorder traversal of the tree.

void helper(Node* root,vector<int>& result){
    if(root == NULL) return;
    helper(root->left,result);
    helper(root->right,result);
    result.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  vector<int> res;
  
  helper(root,res);
  return res;
}