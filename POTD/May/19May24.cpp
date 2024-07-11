#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    {
        int result = arr[0];
        
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(abs(k - arr[mid]) == abs(result - k)){
                result = max(result,arr[mid]);
            }else if(abs(k - arr[mid]) < abs(result - k)){
                result = arr[mid];
            }
            if(arr[mid] == k){
                return k;
            }else if(arr[mid] < k){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return result;
    } 
};