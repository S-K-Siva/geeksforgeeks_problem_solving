#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    
    int minValue(string s, int k){
       unordered_map<char,int> mp;
       
       for(int i = 0;i<s.size();i++){
           ++mp[s[i]];
       }
       
       vector<pair<int,char>> ss;
       
       for(auto it : mp){
           ss.push_back({it.second,it.first});
       }
       
       while(k--){
           sort(ss.begin(),ss.end(),greater<pair<int,char>>());
           if(ss[0].first == 1) ss.erase(ss.begin());
           else ss[0].first -= 1;
       }
       int result = 0;
       for(int i=0;i<ss.size();i++){
           result += ss[i].first*ss[i].first;
       }
       return result;
    }
};