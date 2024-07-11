#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mp;
    if(m > n){
        return "No";
    }
    for(int i = 0;i<m;i++){
        if(mp[a2[i]]) mp[a2[i]]++;
        else mp[a2[i]] = 1;
    }
   
    for(int i = 0;i<n;i++){
        if(mp[a1[i]]){
            if(mp[a1[i]] == 1){
                mp.erase(a1[i]);
            }else{
                --mp[a1[i]];
            }
        }else{
            mp.erase(a1[i]);
        }
    }
    
    if(mp.size() == 0)
        return "Yes";
    else
        return "No";
}