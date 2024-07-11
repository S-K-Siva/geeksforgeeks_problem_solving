#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        unordered_map<int,int> mp;
        
        for(int i = 0;i<n;i++){
            ++mp[arr2[i]];
        }
        
        for(int i = 0;i<n;i++){
            if(!mp[arr1[i]]) return i;
        }
        return -1;
    }
};