#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};

class Solution {
  public:
    Node *copyList(Node *head) {
        //using space (easy wayyyyyy )
        
        // unordered_map<Node *,Node *> mpp;
        // Node *track;
        // track = head;
        
        // while(track != nullptr){
        //     mpp[track] = new Node(track->data);
        //     track = track->next;
        // }
        
        
        // track = head;
        // while(track != nullptr){
        //     mpp[track]->next = track->next;
        //     mpp[track]->random = track->random;
        //     track = track->next;
        // }
        
        // return mpp[head];
        
        //without space (optimal)
        
        Node *myHead = new Node(-1);
        Node *myRandom = new Node(-1);
        Node *myTrack;
        myTrack = myHead;
        
        Node *track;
        track = head;
        while(track != nullptr){
            Node *newNode;
            newNode = new Node(track->data);
            myTrack->next = newNode;
            myTrack = myTrack->next;
            track = track->next; 
        }
        
        track = head;
        myTrack = myHead->next;
        while(track != nullptr && myTrack != nullptr){
            // locate the random pointer.
            Node* miniTrack;
            miniTrack = myHead->next;
            if(track->random){
                int value = track->random->data;
                while(miniTrack && miniTrack->data != value){
                    miniTrack = miniTrack->next;
                }
                myTrack->random = miniTrack;
            }
            track = track->next;
            myTrack = myTrack->next;
        }
        
        return myHead->next;
        
    }
};
