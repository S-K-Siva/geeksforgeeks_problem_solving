#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        unordered_map<Node *,int> mp;
        
        Node* temp = head;
        Node* trap = NULL;
        mp[head] = 1;
        temp = temp->next;
        while(temp != NULL){
            if(mp[temp->next]){
                trap = temp;
                break;
            }else{
                mp[temp] = 1;
            }
            temp = temp->next;
        }
        
        if(trap != NULL){
           
            Node *t = head;
            while(head->next != NULL){
                if(head == trap){
                    head->next = NULL;
                    break;
                }
                head = head->next;
            }
            head = t;
        }
        
    }
};