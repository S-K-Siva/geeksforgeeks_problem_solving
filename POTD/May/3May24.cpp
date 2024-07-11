#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
}; 

// class Solution
// {
//     public:
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(struct Node *root, int k)
//     {
//       // Your code here
//       vector<int>ans;
//       int level=0;
//       queue<Node*>q;
//       q.push(root);
      
//       while(!q.empty()){
//           int n=q.size();
//           for(int i=0;i<n;i++){
//               Node* node=q.front(); q.pop();
//               if(level==k) ans.push_back(node->data);
              
//               if(node->left) q.push(node->left);
//               if(node->right) q.push(node->right);
//           }
//           level++;
//       }
//       return ans;
//     }
// };

class Solution
{
    public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(struct Node *root, int k)
    {
       if(k == 0 && root){
           return {root->data};
       }else if(k == 0 && root == NULL) return {-1};
       
           queue<struct Node*> que;
           que.push(root);
           vector<int> result;
           int height = 0;
           while(!que.empty()){
               if(height == k){
                   while(!que.empty()){
                       result.push_back(que.front()->data);
                       que.pop();
                   }
                   break;
               }
               queue<struct Node*> temp;
               while(!que.empty()){
                   struct Node* curr;
                   curr = que.front();
                   que.pop();
                   if(curr->left != NULL)
                        temp.push(curr->left);
                   if(curr->right != NULL)
                        temp.push(curr->right);
               }
               ++height;
               que = temp;
           }
           return result;
       
    }
};