#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void zigZag(int n, vector<int> &arr) {
        vector<int> track(arr.size(),-1);
        track = arr;
        
        // Time Complexity is O(n^2).
        
        // int index = 0;
        // while(index < n-1){
        //     // even index should be smaller than the next element
        //     if(index%2 == 0){
        //         for(int i = 0;i<track.size();i++){
        //             if(track[i] != -1 && arr[index] > track[i]){
        //                 arr[index] = track[i];
        //                 track[i] = -1;
        //             }
        //         }
        //     }
        //     // even index should be larger than the next element
        //     if(index%2 == 1){
        //         for(int i = 0;i<track.size();i++){
        //             if(track[i] != -1 && arr[index] < track[i]){
        //                 arr[index] = track[i];
        //                 track[i] = -1;
        //             }
        //         }
        //     }
        // }
        
        // Optimal Approach
        
        for(int i = 0;i<n-1;i++){
            if(i%2 == 0){
                // it should be smaller than the next element.
                if(arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
            }else{
                // it should be larger than the next element.
                if(arr[i] < arr[i+1]) swap(arr[i],arr[i+1]);
            }
        }
        for(int i = 0;i<n-1;i++){
            if(i%2 == 0){
                // it should be smaller than the next element.
                if(arr[i] > arr[i+1]) swap(arr[i],arr[i+1]);
            }else{
                // it should be larger than the next element.
                if(arr[i] < arr[i+1]) swap(arr[i],arr[i+1]);
            }
        }
        
    }
};