#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        
        if(n == 1) return 0;
        if(arr[0] == 0) return -1;
        
        int jumps = 0;
        int longest = 0;
        int current = 0;
        
        for(int i = 0;i<n-1;i++){
            longest = max(longest, i+arr[i]);
            
            if(current == i){
                jumps++;
                current = longest;
                
                if(current >= n-1) return jumps;
            }
        }
        return -1;
    }
};
