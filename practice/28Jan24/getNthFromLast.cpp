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
class Solution{
public:
    
    int getNthFromLast(Node *head, int n)
    {
        // finding the length of the linked list
        
        int len = 0;
        Node *temp;
        temp = head;
        
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        if(len < n) return -1;
        temp = head;
        for(int i = 1;i<len-n+1;i++){
            temp = temp->next;
        }
        return temp->data;
    }
};