#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
int isLengthEvenOrOdd(struct Node* head)
{
    int length = 0;
    
    struct Node* temp;
    
    temp = head;
    
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    
    if(length & 1) return 1;
    return 0;
    
}