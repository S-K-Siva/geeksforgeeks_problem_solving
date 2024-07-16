#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    string printString(string s, char ch, int count) {
        int n = s.size();
        int index = -1;
        int currentCount = 0;
        for(int i = 0;i<n;i++){
            
            if(s[i] == ch){
                currentCount++;
            }
            if(currentCount == count){
                index = i+1;
                break;
            }
            
        }
        if(index == -1) return "";
        return s.substr(index,n-index+1);
    }
};