#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countNumberswith4(int n) {
        int res = 0;
        for(int i = 4;i<=n;i++){
            string s = "";
            s += to_string(i);
            if(find(s.begin(),s.end(),'4') != s.end()){
                res++;
            }
        }
        return res;
    }
};