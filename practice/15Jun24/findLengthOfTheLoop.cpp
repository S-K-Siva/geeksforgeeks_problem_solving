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



//Function to find the  length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    unordered_map<Node*,int> track;
    unordered_map<Node*,int> visited;
    int index = 0;
    struct Node *temp;
    temp = head;
    
    
    while(temp != NULL){
        if(!visited[temp]){
        track[temp] = index;
        visited[temp] = 1;
        }
        
        if(visited[temp->next]){
            return (track[temp] - track[temp->next]) + 1;
        }
        index++;
        temp = temp->next;
    }
    return 0;
}