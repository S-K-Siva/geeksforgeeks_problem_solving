#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
class Solution {
public:
    map<int, Node*> mp;
    void helper(Node* node, Node* temp){
        mp[temp->val] = temp;
        for(auto it : node->neighbors){
            bool visited = mp.find(it->val) == mp.end();
            Node *t;
            if(visited){
                t = new Node(it->val);
            }else{
                t = mp[it->val];
            }
            temp->neighbors.push_back(t);
            if(visited){
                helper(it,t);
            }
        }
       
    }
    Node* cloneGraph(Node* node) {
        Node *result = new Node(node->val);
        helper(node,result);
        return result;
    }
};