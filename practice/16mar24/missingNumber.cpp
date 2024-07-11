#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int missingNumber(int n, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        
        for(int i = 0;i<n;i++){
            if(arr[i] != i+1) return i+1;
        }
        
        return n;
        
    }
};