#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int search(int n, int k, vector<int> &arr) {
        for(int i = 0;i<n;i++){
            if(arr[i] == k){
                return i+1;
            }
        }
        return -1;
    }
};