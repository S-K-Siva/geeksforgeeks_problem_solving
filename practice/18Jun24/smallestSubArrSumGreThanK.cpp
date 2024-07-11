#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        int res = n+1;
        int value = 0;
        int prefix = 0;
        for(int i = 0;i<n;i++){
            value += arr[i];
            
            while(value > x && prefix <= i){
                res = min(res,i-prefix+1);
                value -= arr[prefix];
                ++prefix;
                
            }
            
        }
        if(n+1 == res) return 0;
        return res;
    }
};