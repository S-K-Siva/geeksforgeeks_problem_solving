#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        vector<int> result;
        unordered_map<int,int> mp;
        sort(b.begin(),b.end());
        for(int i = 0;i<query.size();i++){
            int index = query[i];
            
            int cnt = 0;
            int target = a[index];
            int low = 0;
            int high = n-1;
            
            while(low <= high){
                int mid = low + (high - low)/2;
                if(b[mid] == target){
                    int ind = mid;
                    while(ind < n){
                        if(b[ind] == target){
                            ind++;
                        }
                        else{
                            break;
                        }
                    }
                    low = ind;
                    break;
                    
                }else if(b[mid] < target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
            
            result.push_back(low);
            
            
        }
        
        return result;
    }
};

