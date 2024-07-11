#include<bits/stdc++.h>
using namespace std;

string firstRepChar(string s)
{
    unordered_map<char,int> mp;
    
    for(int i = 0;i<s.size();i++){
        if(mp[s[i]]){
            string ch = "";
            ch += s[i];
            return ch;
        }
        ++mp[s[i]];
    }
    return "-1";
}