#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long res = 0;
        long long pass = false;
        long long track = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] > k && pass){
                res = max(res,track);
                pass = false;
                track = 0;
            }
            if(arr[i] <= k){
                pass = true;
                track += arr[i];
            }
        }
        res = max(res,track);
        return res;
    }
};