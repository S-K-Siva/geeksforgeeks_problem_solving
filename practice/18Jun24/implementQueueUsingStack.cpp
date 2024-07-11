#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};


struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
    if(front == rear && front == NULL){
        rear = new QueueNode(x);
        front = rear;
        
    }else{
        QueueNode *temp;
        temp = new QueueNode(x);
        rear->next = temp;
        rear->next->next = temp->next;
        rear = rear->next;
    }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        if(front != NULL){
            int value = front->data;
            if(front == rear) rear = rear->next;
            front = front->next;
            
            return value;
        }     
        return -1;
}