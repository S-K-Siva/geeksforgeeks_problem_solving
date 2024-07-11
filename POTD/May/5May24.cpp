#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left,*right;
};

class Solution{
  public:
  
    void helper(unordered_map<int,int>& mp, Node *root,int level){
        if(root == NULL) return;
        if(mp[level]){
            mp[level] += root->data;
        }else{
            mp[level] = root->data;
        }
        helper(mp,root->left,level-1);
        helper(mp,root->right,level+1);
    }
    vector <int> verticalSum(Node *root) {
        unordered_map<int,int> mpp;
        helper(mpp,root,0);
        vector<int> res(mpp.size(),0);
        vector<int> levels;
        for(auto it : mpp){
            levels.push_back(it.first);
        }
        sort(levels.begin(),levels.end());
        for(int i = 0;i<mpp.size();i++){
            res[i] = mpp[levels[i]];
        }
        return res;
    }
};