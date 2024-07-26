#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:

    bool kPangram(string str, int k) {
        string str1 = "";
        unordered_map<char,int> mapp;
        int n = str.size();
        int extraSpace = 0;
        for(int i = 0;i<n;i++)
        {
            if(str[i] != ' '){
                if(!mapp[str[i]]){
                    mapp[str[i]] = 1;
                }else{
                    extraSpace++;
                }
                str1 += str[i];
            }
        }
        str = str1;
        if(str.size() < 26){
            return false;
        }
        int rem = 26 - mapp.size();
        // cout << rem << endl;
        // cout << extraSpace << endl;
        if(rem > k) return false;
        if(extraSpace < rem) return false;
        return true;
        
    }
};