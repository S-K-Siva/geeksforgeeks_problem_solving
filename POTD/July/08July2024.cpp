#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int front = 0;
        int rear = arr.size()-1;
        
        while(front <= rear){
            if(arr[front] == key || arr[rear] == key){
                if(arr[front] == key){
                    return front;
                }
                if(arr[rear] == key){
                    return rear;
                }
            }
            front ++;
            rear --;
        }
        return -1;
    }
};