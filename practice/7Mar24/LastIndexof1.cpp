#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lastIndex(string s) 
    {
        for(int i = s.size()-1;i>-1;i--){
            if(s[i] == '1') return i;
        }
        return -1;
    }

};