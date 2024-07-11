#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map<int,int> mp;
        
        for(int i = 0;i<k && i < n;i++){
            ++mp[A[i]];
        }
        
        vector<int> result;
        result.push_back(mp.size());
        int i = 0;
        int j = k;
        
        
        while(i<j && j < n){
            if(mp[A[i]] == 1)
                mp.erase(A[i]);
            else
                --mp[A[i]];
            ++mp[A[j]];
            result.push_back(mp.size());
            i++;
            j++;
        }
        
        return result;
        
    }
};