#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
  
    int solve(Node* head){
        if(head->next == NULL){
            int val = head->data;
            val++;
            int rem = val % 10;
            head->data = rem;
            val/=10;
            return val;
        }
        int add = solve(head->next);
        int value = add + head->data;
        head->data = value%10;
        value/=10;
        return value;
    }
    Node* addOne(Node* head) {
        int res = solve(head);
        if(res){
            Node *newNode;
            newNode = new Node(res);
            newNode->next = head;
            return newNode;
        }
        return head;
    }
};