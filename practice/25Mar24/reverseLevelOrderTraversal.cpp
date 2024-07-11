#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 
vector<int> reverseLevelOrder(Node *root)
{
    queue<Node *> que;
    que.push(root);
    vector<int> result;
    
    while(!que.empty()){
        queue<Node *> temp;
        vector<int> level;
        while(!que.empty()){
            
        Node *current;
        current = que.front();
        que.pop();
        level.push_back(current->data);
        
        
        if(current->left != NULL){
            temp.push(current->left);
            
            
        }
        if(current->right != NULL){
            temp.push(current->right);
        }
        }
        reverse(level.begin(),level.end());
        que = temp;
        for(auto it : level){
            result.push_back(it);
        }
    }
    reverse(result.begin(),result.end());
    
    return result;
}