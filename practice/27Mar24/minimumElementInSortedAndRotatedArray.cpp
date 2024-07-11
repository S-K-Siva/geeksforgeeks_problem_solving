#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int findMin(int arr[], int n){
        int result = INT_MAX;
        int l = 0;
        int r = n-1;
        
        while(l<=r){
            result = min(result,min(arr[l],arr[r]));
            l++;
            r--;
        }
        
        return result;
    }
};