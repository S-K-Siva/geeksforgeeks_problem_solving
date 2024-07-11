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
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
        
        if(root == NULL) return 0;
        queue<Node*> que;
        que.push(root);
        int res = 1;
        while(!que.empty())
        {
            queue<Node *> temp;
            int len = 0;
            while(!que.empty()){
            Node* el;
            
            el = que.front();
            que.pop();
            if(el->left){
                temp.push(el->left);
                len++;
            }
            if(el->right){
                temp.push(el->right);
                len++;
            }
            
            
            }
            que = temp;
            res = max(res,len);
            
        }
        return res;
    }
};