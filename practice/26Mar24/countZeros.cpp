#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        sort(arr,arr+n);
        int i;
        for( i = 0;i<n;i++){
            if(arr[i] == 1) break;
        }
        return i;
    }
};