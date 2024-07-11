#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int l = 0;int h = n-1;
        
        while(l <= h){
            int mid = l + (h-l)/2;
            
            if(arr[mid] == x){
                int temp1 = mid;
                int temp2 = mid;
            
                while(arr[temp1] == x){
                    temp1--;
                }
                
                while(arr[temp2] == x){
                    temp2++;
                }
                
                return {temp1+1,temp2-1};
            }else if(arr[mid] < x){
                l = mid+1;
            }else{
                h = mid - 1;
            }
        }
        
        return {-1};
    }
};