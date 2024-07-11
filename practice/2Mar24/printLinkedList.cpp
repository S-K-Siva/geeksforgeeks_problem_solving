#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

class Solution
{
    public:
    void display(Node *head)
    {
      
      Node *temp;
      temp = head;
      
      while(temp != NULL){
          cout << temp->data << " ";
          temp = temp->next;
      }
    }
};