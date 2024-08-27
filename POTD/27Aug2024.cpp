#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:

    int findMaxDiff(vector<int> &arr){
        stack<int> st;
        
        int n = arr.size();
        vector<int> left(n,0),right(n,0);
        for(int i = 0;i<n;i++){
            if(st.empty()){
                left[i] = 0;
                st.push(arr[i]);
            }else{
                while(!st.empty() && st.top() >= arr[i]){
                    st.pop();
                }
                if(st.empty()) left[i] = 0;
                else left[i] = st.top();
                st.push(arr[i]);
            }
        }
        
        while (!st.empty()) st.pop();
        
        for(int i = n-1;i>=0;i--){
            
            while(!st.empty() && st.top() >= arr[i]){
                    st.pop();
            }
            if(st.empty()){
                right[i] = 0;
                
            }else{
                
                right[i] = st.top();
            }
            st.push(arr[i]);
        }
        
        int res = 0;
        for(int i = 0;i<n;i++){
            res = max(res,abs(left[i]-right[i]));
        }
        return res;
    }
    
    
    // Wrg, no need of dp, it's stack question
    // int findMaxDiff(vector<int> &arr) {
    //     int n = arr.size();
    //     vector<int> rightDp(n,0);
    //     vector<int> leftDp(n,0);
        
    //     for(int i = 1;i<n;i++){
    //         if(arr[i] >= arr[i-1]){
    //             leftDp[i] = abs(arr[i] - arr[i-1]);
    //         }
    //     }
        
    //     for(int i = n-2;i>=0;i--){
    //         if(arr[i] >= arr[i+1]){
    //             rightDp[i] = abs(arr[i] - arr[i+1]);
    //         }
    //     }
        
    //     int res = 0;
    //     for(int i = 0;i<n;i++){
    //         res = max(res,abs(leftDp[i] - rightDp[i]));
    //     }
    //     return res;
};
