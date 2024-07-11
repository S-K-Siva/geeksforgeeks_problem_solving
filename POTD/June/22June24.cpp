#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool is_digits(string sss){
        for(long long i = 0;i<sss.size();i++){
            if(!isdigit(sss[i])) return false;
        }
        return true;
    }
    long long ExtractNumber(string sentence) {
        stringstream ss(sentence);
        string s;
        vector<string> track;
        // getline(), it takes the string stringsterm string, where 
        // it holds the sentence. And it iterates the string parts 
        // which was seperated by the seperator mentioned in the 
        // getline() method.
        while(getline(ss,s,' ')){
            track.push_back(s);
        }
        long long value = -1;
        for(int i = 0;i<track.size();i++){
            if(is_digits(track[i])){
                if(find(track[i].begin(),track[i].end(),'9') == track[i].end()){
                    long long num = stoll(track[i]);
                    value = max(value,num);
                }
            }
        }
        return (long long) value;
    }
};