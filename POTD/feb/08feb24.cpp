
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
class Solution{
  public:
  
    void helper(set<int> &s,Node *root,int height){
        if(!root) return;
        if(root->left == NULL && root->right == NULL){
            s.insert(height);
            
            return;
        }
        helper(s,root->left,height+1);
        helper(s,root->right,height+1);
    }
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        set<int> s;
   
        helper(s,root,1);
        return s.size() == 1;
    }
};