#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int binarySearch(vector<int>&temp, int target){
        int n = temp.size();
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(temp[mid] == target){
                while(mid-1 >= 0 && temp[mid-1] == target){
                    mid--;
                }
                return mid;
            }else if(temp[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> dp(n,0);
        vector<int> temp{arr.begin(),arr.end()};
        sort(temp.begin(),temp.end());
        for(int i = 0;i<n;i++){
            dp[i] = binarySearch(temp,arr[i]);
            temp.erase(temp.begin()+dp[i]);
        }
        
        return dp;
    }
};