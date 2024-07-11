#include<bits/stdc++.h>
using namespace std;

//Node Structure
struct Node //Given a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes. A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.
{
	int data;
	Node *left, *right;
};

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    void treeTraversal(Node *root,int height,int k,set<Node *>& m,unordered_map<int,Node *> &s){
        if(root == NULL) return;
        int h = height;
        s[h] = root;
        if(root->left == NULL && root->right == NULL){
            if(h - k >= 0 && root->left == NULL && root->right == NULL){
                // cout << "YES" << "root->data:"<< root->data<<".   "<<"height-root:"<<s[h-k]<<endl;
                if(s[h-k]){
                    // cout << "POSSIBLE for data:"<<root->data<<endl;
                    m.insert(s[h-k]);
                }
            }
            return;
            
        }
        
        treeTraversal(root->left,height+1,k,m,s);
        
        treeTraversal(root->right,height+1,k,m,s);
        s.erase(h);
     
    }
    int printKDistantfromLeaf(Node* root, int k)
    {
        unordered_map<int,Node*> ss;
        set<Node *> vv;
        treeTraversal(root,1,k,vv,ss);
        return vv.size();
    }
};