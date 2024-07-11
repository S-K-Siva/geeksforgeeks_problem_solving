#include<bits/stdc++.h>
using namespace std;

int longestSubstrDistinctChars (string S)
{
    int result = INT_MIN;
    unordered_map<char,int> mp;
    string resultant = "";
    int length = 0;
    int n = S.size();
    for(int i = 0;i<n;i++){
        if(mp[S[i]]){
            
            int len = 0;
            while(len < resultant.size()){
                if(resultant[len] == S[i]){
                    len++;
                    break;
                }else{
                    mp.erase(resultant[len]);
                }
                len++;
            }
            string subb = "";
            while(len < resultant.size()){
                subb += resultant[len];
                len++;
            }
            subb += S[i];
            resultant = subb;
            length = resultant.size();
            
        }else{
            mp[S[i]] = 1;
            resultant += S[i];
            length +=1;
            result = max(result,length);
        }
    }
    return result;
}