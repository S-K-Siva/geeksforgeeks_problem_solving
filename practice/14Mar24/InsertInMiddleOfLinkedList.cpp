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


//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
    
    if(head == NULL){
        Node *newnode;
        newnode = new Node(x);
        
        return newnode;
    }
	int length = 0;
	
	Node* temp;
	temp = head;
	
	
	while(temp != NULL){
	    length++;
	    temp = temp->next;
	}
	
	int middle = length/2;
	
	if(length%2 == 0) middle -= 1;
	
	
	int track = 0;
	temp = head;
	while(track != middle && temp != NULL){
	    temp = temp->next;
	    track++;
	}
	
	Node *tempo;
	tempo = temp->next;
	
	
	Node *newNode;
	newNode = new Node(x);
	temp->next = newNode;
	newNode->next = tempo;
	
	return head;
}