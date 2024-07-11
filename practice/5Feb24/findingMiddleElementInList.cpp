#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int length = 0;
        Node *temp;
        temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }
        
        int middle = length/2;
        
        int len = 0;
        Node *temp1;
        temp1 = head;
        while(temp1){
            if(len == middle){
                return temp1->data;
            }
            len++;
            temp1 = temp1->next;
        }
        return -1;
    }
};