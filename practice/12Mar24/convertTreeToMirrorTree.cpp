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

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    
    
    void mirror(Node* node) {
        queue<Node*> q;
        
        q.push(node);
        
        
        while(!q.empty()){
            
            Node *noode = q.front();
            q.pop();
            if(noode->left)
                q.push(noode->left);
            if(noode->right)
                q.push(noode->right);
                
                
            Node *temp1,*temp2;
            temp1 = NULL;
            temp2 = NULL;
            if(noode->left)
                temp1 = noode->left;
            
            if(noode->right)
                temp2 = noode->right;
            noode->left = temp2;
            noode->right = temp1;
            
            
            
        }
        
        
    }
};