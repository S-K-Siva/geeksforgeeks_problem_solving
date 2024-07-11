#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        vector<pair<int,int>> result;
        // Time Complexity :O(N * M)
        
        // for(int i = 0;i<N;i++){
        //     for(int j = 0;j<M;j++){
        //         if(A[i] + B[j] == X){
        //             result.push_back(make_pair(A[i],B[j]));
        //         }
        //     }
        // }
        
        //Time Complexity : O(max(N,M)) --> Optimal
        unordered_map<int,int> mp;
        
        for(int i = 0;i<N;i++){
            ++mp[A[i]];
        }
        
        for(int i = 0;i<M;i++){
            if(mp[X-B[i]]){
                result.push_back(make_pair(X-B[i],B[i]));
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};