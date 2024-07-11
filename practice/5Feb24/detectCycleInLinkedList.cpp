#include<bits/stdc++.h>
using namespace std;

struct Node
{
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
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        unordered_map<Node*,int> mp;
        
        while(head)
        {
            if(mp[head]) return true;
            else mp[head] = 1;
            head = head->next;
        }
        return false;
    }
};