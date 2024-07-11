#include<bits/stdc++.h>
#include<vector>
using namespace std;



// Trees
struct TreeNode{
    int val;
    struct TreeNode *left,*right;
    
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


typedef struct TreeNode Node;

// Inserting nodes into Tree 
Node* insertTree(Node *root, int element){
    if(root == nullptr){
        return new Node(element);
    }

    if(root->val < element){
        root->right = insertTree(root->right, element);
    }else{
        root->left = insertTree(root->left,element);
    }
    return root;
}
Node *findMinimumNode(Node* current){
    while(current->left != nullptr){
        current = current->left;
    }
    return current;
}
// Deleting nodes from the Tree
Node *deleteTree(Node *root, int element){
    if(root == nullptr){
        return nullptr;
    }
    if(root->val == element){
        // element found
        if(root->left && root->right){ // if it has both child
            // get the least node from the right sub tree..
            Node* mini_node = findMinimumNode(root->right);
            root->val = mini_node->val;
            // we changed the value.. now we need to delete the least node of right sub tree
            root->right = deleteTree(root->right,root->val);
        }else{
            Node* temp_curr = nullptr;
            if(root->left){
                temp_curr = root->left;
            }else if(root->right){
                temp_curr = root->right;
            }
            delete root;
            return temp_curr;
        }
    }
    root->left = deleteTree(root->left,element);
    root->right = deleteTree(root->right,element);
    return root;
}
void inorderTraversal(Node* root){
    if(root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void preOrderTraversal(Node *root){
    if(root == nullptr){
        return;
    }
    cout << root->val << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(Node *root){
    if(root == nullptr){
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<< root->val<< " ";
}

int main(){
    Node *root = nullptr;
    vector<int> nodes;
    nodes.assign({50,30,20,40,70,60,80});
    
    for(int i = 0;i<nodes.size();i++){
        root = insertTree(root,nodes[i]);
    }
    root = deleteTree(root,40); // deleting node 40 from the tree....
    inorderTraversal(root);
    cout << endl;
    preOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
    cout << endl;
    return 0;
}