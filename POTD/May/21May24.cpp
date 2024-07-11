#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int findIndex = 0;
        bool elementFound = false;
        bool end = false;
        for(int i = 0;i<n;i++){
            if(arr[i] == x){
                findIndex = i;
                elementFound = true;
                break;
            }else if(arr[i] > x){
                
                findIndex = i;
                break;
            }else{
                if(i == n-1) end = true;
            }
        }
        if(end){
            findIndex = n-1;
        }
        
        int left,right;
        vector<int> result;
        
        if(elementFound){
            left = findIndex - 1;
            right = findIndex + 1;
        }else{
            left = findIndex -1;
            right = findIndex;
        }
        // cout << left << "< -- >" << right << endl;
        // cout << arr[left] << "< -- >" << arr[right] << endl;
        int track = k;
        while(track){
            
            if(left >= 0 && right < n && abs(arr[left]-x) < abs(arr[right]-x)){
            
                result.push_back(arr[left]);
                left --;
            }else if(left >= 0 && right < n && abs(arr[left]-x) > abs(arr[right]-x)){
                result.push_back(arr[right]);
                right ++;
            }else if(left < 0 && right < n){
                result.push_back(arr[right]);
                right++;
            }else if(left >= 0 && left < n && right >= n){
                
                result.push_back(arr[left]);
                left--;
            }else{
                if(right < n){
                result.push_back(arr[right]);
                right++;
                }else{
                    result.push_back(arr[left]);
                    left--;
                }
            }
            
            track--;
        }
        return result;
        
    }
};