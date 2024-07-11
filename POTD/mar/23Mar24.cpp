#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
class Solution {
  public:
    vector<int> Series(int n) {
        if(n == 0){
            return {0};
        }
        else if(n == 1){
            return {0,1};
        }
        vector<int> result;
        result.push_back(0);
        result.push_back(1);
        for(int i = 2;i<=n;i++){
            result.push_back(((result[result.size()-1]%mod)+(result[result.size()-2]%mod))%mod);
        }
        return result;
    }
};