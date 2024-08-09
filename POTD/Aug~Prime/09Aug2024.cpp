#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int Maximize(vector<int> arr) {
        sort(arr.begin(),arr.end());
        long long int mod = 1000000007;
        int result = 0;
        for(int i = 0;i<arr.size();i++){
            result += ((arr[i] % mod) * (i%mod)) % mod;
            result %= mod;
        }
        
        return result % mod;
    }
};