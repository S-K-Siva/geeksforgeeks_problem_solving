#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        if(head == nullptr) return nullptr;
        Node *track;
        track = head;
       
        for(int i = 0;i<k-1 && track;i++){
            track = track->next;
        }
        
        if(track == nullptr) return head;
        
        Node *newHead,*track2;
        newHead = track->next;
        track->next = nullptr;
        if(newHead == nullptr) return head;
        track2 = newHead;
        while(track2 && track2->next != nullptr){
            track2 = track2->next;
        }
        track2->next = head;
        head = newHead;
        return head;
    }
};