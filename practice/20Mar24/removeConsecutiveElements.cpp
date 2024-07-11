#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        string res = "";
        for(int i = 0;i<S.size();i++)
        {
            if(res == ""){
               res += S[0]; 
            }
            else if(S[i] != res[res.size()-1]){
                res += S[i];
            }
        }
        return res;
        
    }
};