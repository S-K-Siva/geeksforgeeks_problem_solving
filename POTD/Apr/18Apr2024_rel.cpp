#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        map<int,int> mp;
        vector<int> result;
        int size = n+2;
        for(int i = 0;i<size;i++){
            if(!mp[arr[i]]) mp[arr[i]] = 1;
            else{
                ++mp[arr[i]];
                if(mp[arr[i]] == 2)
                    result.push_back(arr[i]);
            }
        }
        
        
        return result;
    }
};