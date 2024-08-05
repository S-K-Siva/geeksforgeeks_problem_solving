#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void solve(Node* root, int ind, int depth, std::map<int, std::pair<int, int>>& mp) {
        if (root == NULL) {
            return;
        }
        
        
        if (mp.find(ind) == mp.end() || depth >= mp[ind].second) {
            mp[ind] = {root->data, depth};
        }

        
        solve(root->left, ind - 1, depth + 1, mp);
        
        solve(root->right, ind + 1, depth + 1, mp);
    }

    vector<int> bottomView(Node* root) {
        
        map<int,pair<int, int>> mp;
        vector<int> result;
        
        
        solve(root, 0, 0, mp);
        
        
        for (auto it : mp) {
            result.push_back(it.second.first);
        }
        
        return result;
    }
};