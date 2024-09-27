#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    // vector<int> max_of_subarrays(int k, vector<int> &arr) {
    //     vector<int> result;
    //     int n = arr.size();
    //     deque<int> m;
        
        
    //     for(int i = 0;i<k;i++){
    //         m.push_back(arr[i]);
    //     }
        
    //     result.push_back(*max_element(m.begin(),m.end()));
        
    //     for(int i = k;i<n;i++){
    //         m.pop_front();
    //         m.push_back(arr[i]);
    //         result.push_back(*max_element(m.begin(),m.end()));
    //     }
    //     return result;
    // }
    
    
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int> mm;
        deque<int> dq;
        int n = arr.size();
        for(int i = 0;i<k;i++){
            
            while(!dq.empty() && arr[i] >= arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        for(int i = k;i<n;i++){
            if(!dq.empty()){
                mm.push_back(arr[dq.front()]);
            }
            while(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }
            
            while(!dq.empty() && arr[i] >= arr[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        mm.push_back(arr[dq.front()]);
        return mm;
    }
    
};
