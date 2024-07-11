#include<bits/stdc++.h>
using namespace std;


class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        sort(arr,arr+n);
        int cnt = 0;
        unordered_map<int,int> vals;
        for(int i = 0;i<n;i++){
            
               
                
                if(vals[k-arr[i]])
                    cnt += vals[k-arr[i]];
                if(vals[arr[i]]) vals[arr[i]]++;
                else
                    vals[arr[i]] = 1;
            
        }
        
        
        
        return cnt;
    }
};