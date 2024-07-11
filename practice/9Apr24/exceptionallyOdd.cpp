#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            ++mp[arr[i]];
        }
        
        for(auto it : mp){
            if(it.second%2 == 1){
                return it.first;
            }
        }
        return -1;
    }
};