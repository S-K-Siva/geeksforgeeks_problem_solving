#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        
        multiset<int> ss(arr1.begin(),arr1.end());
        vector<int> res(ss.begin(),ss.end());
        int res_size = res.size();
        int mid = res_size/2;
        if(res_size%2 == 0){
            
            return res[mid] + res[mid-1];
        }
        return res[mid];
    }
};