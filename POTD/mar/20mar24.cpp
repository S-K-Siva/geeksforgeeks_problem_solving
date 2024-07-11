#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    void helper(vector<int>& res,int cur_tot,vector<int>& max_height,int height,Node* root){
        if(root == NULL){
            return;
        }
        if(max_height[0] <= height){
            if(max_height[0] == height){
                res[0] = max(res[0],cur_tot);
                max_height[0] = max(max_height[0],height);
            }
            else{
                res[0] = cur_tot;
                max_height[0] = max(max_height[0],height);
            }
        }
        if(root && root->left != NULL)
            helper(res,cur_tot+root->left->data,max_height,height+1,root->left);
        if(root && root->right != NULL)
            helper(res,cur_tot+root->right->data,max_height,height+1,root->right);
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(root == NULL) return 0;
        vector<int> res(1,root->data);
        vector<int> max_height(1,1);
        helper(res,root->data,max_height,1,root);
        return res[0];
    }
};