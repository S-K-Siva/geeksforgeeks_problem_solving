#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int isValid(string str) {
        
        
        string curr = "";
        int cnt = 0;
        for(int i = 0;i<str.size();i++){
            if(str[i] == '.'){
                cnt++;
                if(curr.size() == 0) return 0;
                if(curr.size()){
                    if(curr[0] == '0' && curr.size() > 1) return 0;
                    int val = stoi(curr);
                    if(val < 0 || val > 255) return 0;
                   
                }
                curr = "";
            }else{
            curr += str[i];
            }
            
        }
        if(curr.size())
            cnt++;
        
        int val = stoi(curr);
        if(val < 0 || val > 255) return 0;
        if(cnt != 4) return 0;
        return 1;
    }
};