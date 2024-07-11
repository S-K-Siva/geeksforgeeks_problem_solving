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

class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_map<int,int> mp;
        
        struct Node *temp;
        temp= head1;
        while(temp != NULL){
            mp[temp->data] = 1;
            temp = temp->next;
        }
        
        temp = head2;
        int cnt = 0;
        while(temp != NULL){
            if(mp[x-temp->data]) cnt++;
            temp = temp->next;
        }
        
        return cnt;
    }
};