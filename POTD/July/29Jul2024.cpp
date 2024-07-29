#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        int res = -1;
        int maxOnes = 0;
        int index = 0;
        for(auto it : arr){
            int total = accumulate(it.begin(),it.end(),0);
            if(total > maxOnes){
                maxOnes = max(maxOnes,total);
                res = index;
            }
            index++;
        }
        return res;
        
    }
};