class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    
    void inorder(Node *root,multiset<int> &s){
        if(!root) return;
        inorder(root->left,s);
        s.insert(root->data);
        inorder(root->right,s);
        
    }
    vector<int> merge(Node *root1, Node *root2) {
        multiset<int> ss;
        inorder(root1,ss);
        inorder(root2,ss);
        return {ss.begin(),ss.end()};
        
    }
};
