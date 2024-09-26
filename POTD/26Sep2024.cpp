#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int n = arr.size();
        if(n < 2) return 0;
        
        int res = 0;
        int cnt = 0;
        for(int i = 0;i<n-1;i++){
            if(arr[i] < arr[i+1]){
                cnt++;
                res = max(res,cnt);
            }else{
                cnt = 0;
            }
        }
        
        return res;
    }
};
