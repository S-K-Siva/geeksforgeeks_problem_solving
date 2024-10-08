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
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       Node* prev=NULL;
       while(del->next!=NULL){
           int data=del->data;
           del->data=del->next->data;
           del->next->data=data;
           
           prev=del;
           del=del->next;
       }
       
       prev->next=NULL;
       return;
       
    }

};