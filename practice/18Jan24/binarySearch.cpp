#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        int l = 0;
        int r = n-1;
        while(l <= r){
            int m = (l+r)/2;
            if(arr[m] == k) return m;
            else if(arr[m] > k) r = m-1;
            else l = m+1;
        }
        return -1;
    }
};