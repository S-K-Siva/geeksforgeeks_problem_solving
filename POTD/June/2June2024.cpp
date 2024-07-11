#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &arr) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        // vector<int> result(1,0);
        
        // for(int i = 0;i<queries.size();i++){
        //     if(queries[i][0] == 0){
        //         result.push_back(queries[i][1]);
        //     }else if(queries[i][0] == 1){
        //         for(int j = 0;j<result.size();j++){
        //             result[j]^=queries[i][1];
        //         }
        //     }
        // }
        // sort(result.begin(),result.end());
        // return result;
        vector<int>ans;
        int x=0;
        
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i][0]==0){
                ans.push_back(x^arr[i][1]);
            }
            else{
                x^=arr[i][1];
            }
        }
        ans.push_back(0^x);
        sort(ans.begin(), ans.end());
        return ans;
    }
};