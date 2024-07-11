#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string res = "";
            
            unordered_map<char,int> mp,mp1;
            
            for(int i = 0;i<A.size();i++){
                ++mp[A[i]];
            }
            for(int i = 0;i<B.size();i++){
                ++mp1[B[i]];
            }
            
            for(auto it : mp){
                if(!mp1[it.first]){
                    res += it.first;
                }
            }
            for(auto it : mp1){
                if(!mp[it.first]){
                    res += it.first;
                }
            }
            sort(res.begin(),res.end());
            if(res == "") return "-1";
            return res;
        }
};