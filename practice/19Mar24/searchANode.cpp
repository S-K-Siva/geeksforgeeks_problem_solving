#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node* root, int x) {
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(search(root->left,x) == true) return true;
    if(search(root->right,x) == true) return true;
    
    return false;
}