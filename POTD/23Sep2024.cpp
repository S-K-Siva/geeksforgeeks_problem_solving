#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int missing = -1;
        int repeating = -1;
        vector<int> freq(arr.size()+1,0);
        freq[0] = 1;
        int index = 1;
        sort(arr.begin(),arr.end());
        
        for(auto it : arr){
            if(freq[it]){
                repeating = it;
            }
            ++freq[it];
        }
        
        for(int i = 0;i<=freq.size();i++){
            if(freq[i] == 0){
                missing = i;
                break;
            }
        }
        
        
        return {repeating, missing};
    }
};
