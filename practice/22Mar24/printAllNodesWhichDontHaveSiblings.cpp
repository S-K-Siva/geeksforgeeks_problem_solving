#include<bits/stdc++.h>
using namespace std;

 struct Node
 {
     int data;
     Node* left, *right;
};

vector<int> noSibling(Node* node)
{
    vector<int> result;
    
    
    queue<Node* > que;
    que.push(node);
    
    
    while(!que.empty()){
        // popping
        queue<Node*> temp_que;
        
        while(!que.empty()){
        Node *current;
        current = que.front();
        if(current->left != NULL && current->right != NULL){
            temp_que.push(current->left);
            temp_que.push(current->right);
        }else{
            if(current->left){
                temp_que.push(current->left);
                result.push_back(current->left->data);
            }
            
            if(current->right){
                temp_que.push(current->right);
                result.push_back(current->right->data);
            }
        }
        que.pop();
        }
        que = temp_que;
    }
    
    sort(result.begin(),result.end());
    if(result.size() == 0) return {-1};
    return result;
    
}