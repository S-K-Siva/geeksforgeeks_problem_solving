#include<bits/stdc++.h>
using namespace std;

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


//Function to return the level order traversal line by line of a tree.


vector<vector<int>> levelOrder(Node* node)
{
    queue<Node*> que;
    que.push(node);
    
    vector<vector<int>> result;
    while(!que.empty()){
        
        
        vector<int> curr;
        
        queue<Node*> temp;
        
        while(!que.empty()){
            Node* cur = que.front();
            que.pop();
          
            curr.push_back(cur->data);
            if(cur->left != NULL)
                temp.push(cur->left);
        
            if(cur->right != NULL)
                temp.push(cur->right);
            
        }
        result.push_back(curr);
        que = temp;
    }
    
    return result;
}