#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        priority_queue<long long, vector<long long>,greater<long long>> pq;
        
        for(auto it : arr){
            pq.push(it);
        }
        
        int n = arr.size();
        long long res = 0;
        while(pq.size() >= 2){
            long long first, second;
            
            first = pq.top();
            pq.pop();
            second = pq.top();
            pq.pop();
            
            pq.push(first + second);
            res += first + second;
        }
        
        return res;
    }
};
