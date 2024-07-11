#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        unordered_map<int,int> mp;
        for(int i = 0;i<arr.size();i++){
            if(mp[arr[i]]) mp[arr[i]]++;
            else mp[arr[i]] = 1;
        }
        
        // for(auto it : mp){
        //     cout << it.first << " " << it.second << endl;
        // }
        
        for(int i = 0;i<N;i++){
            // if(i+1 > P) break;
            if(mp[i+1]){
                arr[i] = mp[i+1];
            }else{
                arr[i] = 0;
            }
        }
    }
};