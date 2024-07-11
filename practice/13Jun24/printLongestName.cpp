#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longest(int n, vector<string> &names) {
        string s = names[0];
        for(int i = 1;i<names.size();i++){
            if(names[i].size() > s.size()){
                s = names[i];
            }
        }
        return s;
    }
};