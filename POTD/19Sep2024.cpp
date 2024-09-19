#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        string res = "";
        
        string current = "";
        
        for(int i = 0;i<str.size();i++){
            if(str[i] == '.'){
                res = current + "." + res;
                current = "";
            }else{
                current += str[i];
            }
        }
        res = current + "." + res;
        
        return res.substr(0,res.size()-1);
    }
};
