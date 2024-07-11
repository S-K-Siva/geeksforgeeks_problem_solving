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
// Slow and fast pointer concept..

bool isCircular(Node *head)
{
   Node *slow,*fast;
   
   slow = head;
   fast = head;
   
   while(fast != NULL && fast->next != NULL){
       
       slow = slow->next;
       fast = fast->next->next;
       
       if(slow == fast) return true;
       
   }
   return false;
}