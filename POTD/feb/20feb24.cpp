#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:

    
    bool helper(string s,unordered_map<string,int>& mp,int index){
        if(index >= s.length()) return true;
        
        for(int i = index;i<s.length();i++){
            string substring = s.substr(index,i-index+1);
            if(mp.find(substring) != mp.end()){
                if(helper(s,mp,i+1)){
                    return true;
                }
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
       unordered_map<string,int> mp;
       
       for(int i = 0;i<dictionary.size();i++){
           ++mp[dictionary[i]];
       }
       
       if(helper(s,mp,0)) return 1;
       return 0;
    }
};