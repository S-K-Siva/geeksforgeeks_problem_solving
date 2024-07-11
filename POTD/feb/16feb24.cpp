#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    void inorderTraversal(vector<int> &arr, Node *root){
        if(root == NULL) return;
        inorderTraversal(arr,root->left);
        arr.push_back(root->data);
        inorderTraversal(arr,root->right);
    }
    Node *flattenBST(Node *root)
    {
        vector<int> ans;
        inorderTraversal(ans,root);
        
        sort(ans.begin(),ans.end());
        Node *result = new Node(-1);
        Node *temp;
        temp = result;
        for(int i = 0;i<ans.size();i++){
            Node *newNode;
            newNode = new Node(-1);
            newNode->data = ans[i];
            temp->right = newNode;
            temp = newNode;
        }
        return result->right;
        
    }
};