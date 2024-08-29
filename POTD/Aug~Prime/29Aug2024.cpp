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

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        unordered_map<Node*,int> mpp;
        
        
        Node *temp;
        temp = head;
        int index = 1;
        while(temp != NULL){
            if(mpp[temp->next]){
                return index - mpp[temp->next] + 1;
            }
            mpp[temp] = index;
            ++index;
            temp = temp->next;
        }

        return 0;
    }
};
