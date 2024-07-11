#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> res(2,0);
        vector<int> track(n+1,0);
        sort(arr.begin(),arr.end());
        bool repeatedFound = false;
        bool ismissing = false;
        track[0] = 1;
        // for(auto it : arr){
        //     cout << it << " ";
        // }cout << endl;
    
        for(int i = 0;i<n;i++){
            
            if(track[arr[i]] && !repeatedFound){
                res[0] = arr[i];
                
                repeatedFound = true;
            }else{
                track[arr[i]] = 1;
            }
        }
        for(int i = 0;i<=n;i++){
            if(track[i] == 0){
                res[1] = i;
                break;
            }
        }
        
        return res;
    }
};