#include<bits/stdc++.h>
using namespace std;


struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};


class Solution
{
    public:
    void helper(Node *head, priority_queue<int>& pq){
        if(head == NULL) return;
        pq.push(head->data);
        helper(head->next,pq);
        head->data = pq.top();
        pq.pop();
        
    }
    // your task is to complete this function
    void sort(Node **head)
    {
         priority_queue<int> pq;
         
         Node *new_head = (*head);
         helper(new_head,pq);
    }
};