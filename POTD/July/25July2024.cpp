#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};


class Solution {
  public:
  
    Node* solve(vector<int>& nums,int low,int high, Node* root){
        if(low > high) return NULL;
        int mid = low + (high - low)/2;
        if(root->data > nums[mid]){
            root->left = new Node(nums[mid]);
            solve(nums,mid+1,high,root->left);
            solve(nums,low,mid-1,root->left);
        }else{
            root->right = new Node(nums[mid]);
            solve(nums,mid+1,high,root->right);
            solve(nums,low,mid-1,root->right);
        }
        return root;
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        Node *root;
        int n = nums.size();
        int mid = n/2;
        root = new Node(nums[mid]);
        root = solve(nums,0,mid-1,root);
        root = solve(nums,mid+1,n-1,root);
        return root;
    }
};