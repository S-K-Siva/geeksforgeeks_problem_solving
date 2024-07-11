#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
    Node* next;
    Node(int val) : data(val), left(NULL), right(NULL), next(NULL) {}
};
class Solution {
  public:
    void inOrderTraversal(Node* root,vector<Node*>& arr){
        Node* newNode;
        if(root == NULL){
            return;
        }
        inOrderTraversal(root->left,arr);
        arr.push_back(root);
        inOrderTraversal(root->right,arr);
    }
    
    void deleteWholeTree(Node *root){
        if(root == NULL) return;
        deleteWholeTree(root->left);
        deleteWholeTree(root->right);
        delete root;
    }
    void populateNext(Node *root) {
        if(!root) return;
        vector<Node*> result;
        inOrderTraversal(root,result);
        for(int i = 0;i<result.size();i++){
            if(i == result.size()-1)
                result[i]->next = NULL;
            else
                result[i]->next = result[i+1];
        }
        
    }
};