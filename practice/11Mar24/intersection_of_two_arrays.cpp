#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        
        
        unordered_map<int,int> mp,track;
        int resultCnt = 0;
            for(int i = 0;i<n;i++){
                ++mp[a[i]];
            }
            for(int i = 0;i<m;i++)
            {
                
                if(mp[b[i]] && !track[b[i]]){
                    resultCnt++;
                    track[b[i]] = 1;
                }
            }
         
        
        return resultCnt;
        
        
    }
};