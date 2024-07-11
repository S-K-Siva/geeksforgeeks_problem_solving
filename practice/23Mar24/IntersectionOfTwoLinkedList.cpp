#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};



class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int> mp;
        
        
        Node* temp;
        temp = head1;
        while(temp != NULL){
            mp[temp->data]++;
            temp = temp->next;
        }
        
        
        temp = head2;
        Node *result;
        result = new Node(-1);
        Node *track;
        track = result;
        while(temp != NULL){
            if(mp[temp->data]){
                --mp[temp->data];
                Node *newNode;
                newNode = new Node(temp->data);
                track->next = newNode;
                track = track->next;
            }
            temp = temp->next;
        }
        
        return result->next;
    }
};