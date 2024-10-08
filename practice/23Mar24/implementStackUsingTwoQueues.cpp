#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if(q1.empty()){
            q1.push(x);
        }else{
            q2.push(x);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }
            
            
            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.empty()){
            return -1;
        }else{
            int element = q1.front();
            q1.pop();
            return element;
        }
}