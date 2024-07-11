#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to count number of nodes in BST that lie in the given range.
class Solution{
public:

    void helper(vector<int>& res,Node *root,int l,int h){
        if(root == NULL) return;
        
        if(root && root->data <= h && root->data >= l) res[0]++;
        helper(res,root->left,l,h);
        helper(res,root->right,l,h);
    }
    int getCount(Node *root, int l, int h)
    {
         vector<int> res(1,0);
         helper(res,root,l,h);
         
         return res[0];
    }
};