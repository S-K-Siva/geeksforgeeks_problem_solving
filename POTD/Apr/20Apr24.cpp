#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            ++mp[arr1[i]];
        }
        for(int j = 0;j<m;j++){
            ++mp[arr2[j]];
        }
        vector<int> result;
        for(auto it : mp){
            result.push_back(it.first);
        }
        sort(result.begin(),result.end());
        return result;
    }
};