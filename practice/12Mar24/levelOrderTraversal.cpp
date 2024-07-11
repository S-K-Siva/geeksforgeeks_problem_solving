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
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        queue<Node *> qq;
        
        qq.push(root);
        vector<int> result;
        Node* temp;
        temp = root;
        
        while(!qq.empty()){
            Node *node;
            node = qq.front();
            qq.pop();
            result.push_back(node->data);
            if(node->left)    
                qq.push(node->left);
            if(node->right)
                qq.push(node->right);
            
        }
        
        return result;
    }
    
};