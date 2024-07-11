#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};


class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        map<int,int> mp;
        Node *temp;
        temp = head;
        while(temp != NULL){
            
            ++mp[temp->data];
            temp = temp->next;
        }
        
        
        Node *result;
        result = new Node(-1);
        Node *res;
        res = result;
        
        for(auto it : mp){
            // creating new node
            if(it.second == 1){
                Node *newNode;
                newNode = new Node(it.first);
                res->next = newNode;
                res = res->next;
            }
        }
        
        return result->next;
    }
};