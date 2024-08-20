#include<bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  
    void burnDepth(map<int,vector<int>>& adjLst, int value, map<int,int>& visited, vector<int>& ans, int depth){
    visited[value] = 1;
    ans[0] = max(ans[0], depth);
    for(auto neighbour : adjLst[value]){
        if(!visited[neighbour])
            burnDepth(adjLst, neighbour, visited, ans, depth + 1);
    }
}

int minTime(Node* root, int target) 
{
    if (!root) return 0;

    map<int,vector<int>> mpp;
    queue<Node*> que;
    que.push(root);

    while(!que.empty()){
        Node* child = que.front();
        que.pop();

        if(child->left){
            mpp[child->data].push_back(child->left->data);
            mpp[child->left->data].push_back(child->data);
            que.push(child->left);
        }
        if(child->right){
            mpp[child->data].push_back(child->right->data);
            mpp[child->right->data].push_back(child->data);
            que.push(child->right);
        }
    }

    map<int,int> vis;
    vector<int> answer(1, 0);

    burnDepth(mpp, target, vis, answer, 0);
    return answer[0];
}

};
