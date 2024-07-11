#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int> arr(1,0);
        unordered_map<int,int> mp;
        mp[0] = 1;
        if(n == 1) return arr;
        for(int i = 1;i<n;i++){
            if(arr[i-1] - i < 0){
                arr.push_back(arr[i-1]+i);
                if(!mp[arr[i]]){
                    mp[arr[i]] = 1;
                }
            }else if(arr[i-1]-i == 0){
                if(mp[arr[i-1]-i])
                    arr.push_back(arr[i-1]+i);
                    if(!mp[arr[i-1]+i]) mp[arr[i-1]+i] = 1;
            }else{
                if(!mp[arr[i-1]-i]){
                    arr.push_back(arr[i-1] - i);
                    mp[arr[i]] = 1;
                }else{
                    arr.push_back(arr[i-1]+i);
                    mp[arr[i]] = 1;
                }
            }
        }
        return arr;
    }
};