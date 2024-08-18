#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int total = accumulate(arr.begin(),arr.end(),0);
        int mid = total/2;
        if(total%2 == 1) return false;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            total -= arr[i];
            if(total == mid) return true;
            
        }
        return false;
    }
};