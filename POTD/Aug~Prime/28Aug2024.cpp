#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        map<int,int> mpp;
        for(auto it : arr){
            ++mpp[it];
        }
        vector<pair<int,int>> vec;
        for(auto it : mpp){
            vec.push_back({it.second,it.first});
        }
        
        sort(vec.begin(),vec.end(),[&](pair<int,int> p1, pair<int,int> p2){
            if(p1.first == p2.first) return p1.second < p2.second;
            return p1.first > p2.first;
        });
        vector<int> res;
        for(auto it : vec){
            int hs = it.first;
            while(hs--){
                res.push_back(it.second);
            }
        }
        
        
        return res;
    }
};
