#include<bits/stdc++.h>
using namespace std;

// used level order traversal

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

vector<int> leftView(Node *root)
{
    if(!root) return {};
    queue<Node*> q;
    q.push(root);
    vector<int> result;
    while(!q.empty()){
        result.push_back(q.front()->data);
        queue<Node *> temp;
        while(!q.empty()){
            Node *e = q.front();
            if(e->left) temp.push(e->left);
            if(e->right) temp.push(e->right);
            q.pop();
        }
        q = temp;
    }
    return result;
}