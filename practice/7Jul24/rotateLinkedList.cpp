#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};



class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        if(k == 0) return head;
        Node *result;
        result = head;
        int length = 0;
        
        Node *temp;
        temp = result;
        while(temp != NULL){
            ++length;
            temp = temp->next;
        }
        
        k%=length;
        if(k == 0) return head;
        
        
        Node *returnResult,*track;
        returnResult = new Node(-1);
        returnResult->next = result;
        track = returnResult;
        int index = 0;
        while(track && track->next != NULL){
            if(index == k){
                break;
            }
            ++index;
            track = track->next;
        }
        
        
        if(track->next == NULL){
            return NULL;
        }
        Node *res;
        res = track->next;
        Node *newTrack = res;
        
        while(newTrack && newTrack->next != NULL){
            newTrack = newTrack->next;
        }
        newTrack->next = returnResult->next;
        track->next = NULL; // delete the memory... of the extra node..
        return res;
    }
};