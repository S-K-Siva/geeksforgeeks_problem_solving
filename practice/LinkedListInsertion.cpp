#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 
class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        if(head == NULL){
            Node *newNode = new Node(x);
            return newNode;
        }
       Node *newNode = new Node(x);
       newNode->next = head;
       
       return newNode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        if(head == NULL){
            Node *newNode = new Node(x);
            return newNode;
        }
       Node *newNode = new Node(x);
       Node *temp;
       temp = head;
       while(temp->next != NULL && temp != NULL){
           temp = temp->next;
       }
       temp->next = newNode;
       return head;
    }
};