#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        int length = 0;
        
        
        Node *temp;
        temp = head;
        
        while(temp != nullptr){
            ++length;
            temp = temp->next;
        }
        
        int mid = length/2;
        temp = head;
        length = 0;
        while(temp != nullptr){
            ++length;
            if(length == mid+1) return temp->data;
            temp = temp->next;
        }
        return -1;
    }
};
