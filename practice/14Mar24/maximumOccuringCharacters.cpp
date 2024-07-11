#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        char maxi = str[0];
        int maxo = 1;
        unordered_map<char,int> mp;
        
        for(int i = 0;i<str.size();i++){
            ++mp[str[i]];
            if(maxo <= mp[str[i]]){
                maxi = str[i];
                maxo = mp[str[i]];
               
            }
        }
        
        vector<char> vv;
        
        for(auto it : mp){
            if(it.second == maxo)
                vv.push_back(it.first);
        }
        
        
        sort(vv.begin(),vv.end());
        return vv[0];
    }

};