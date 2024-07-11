#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
       stack<long long> s;
       s.push(arr[n-1]);
       arr[n-1] = -1;
        
        for(int i = n-2;i>-1;i--){
            if(s.empty()){
                s.push(arr[i]);
                arr[i] = -1;
                continue;
            }
            while(!s.empty() && s.top() <= arr[i]){
                s.pop();
            }
            if(!s.empty()){
            long long val = s.top();
            s.push(arr[i]);
            arr[i] = val;
            }else{
                s.push(arr[i]);
                arr[i] = -1;
            }
                
        }
        return arr;
        
    }
};