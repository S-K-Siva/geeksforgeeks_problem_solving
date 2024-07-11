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



// Deletes middle of linked list and returns head of the modified list
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        
        int length = 0;
        
        Node* temp;
        
        temp = head;
        
        
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        if(length == 1) return NULL;
        int mid = length/2;
        
        
        int index = 0;
        
        temp = head;
        while(temp != NULL && index+1 != mid){
            index++;
            temp = temp->next;
        }
        
        temp->next = temp->next->next;
        
        return head;
        
    }
};