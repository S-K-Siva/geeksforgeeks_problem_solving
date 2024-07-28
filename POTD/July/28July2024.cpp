#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    string removeDups(string str) {
        unordered_map<char,int> mpp;
        string res = "";
        for(int i = 0;i<str.size();i++){
            if(mpp[str[i]]) continue;
            ++mpp[str[i]];
            res += str[i];
        }
        return res;
    }
};