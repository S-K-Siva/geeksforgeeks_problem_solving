#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

};

class Solution
{
    
    void helper(Node *root,vector<int>& arr){
        if(root == NULL) return;
        helper(root->left,arr);
        arr.push_back(root->data);
        helper(root->right,arr);
    }
    public:
    int absolute_diff(Node *root)
    {
        vector<int> data;
        helper(root,data);
        int res = abs(data[0]-data[1]);
        for(int i = 0;i<data.size()-1;i++){
            res = min(res,abs(data[i]-data[i+1]));
        }
        
        return res;
    }
};