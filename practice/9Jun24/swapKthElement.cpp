#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void swapKth(int n, int k, vector<int> &arr) {
        int left = 0;
        int right = n-1;
        // while(left < n &&  right > -1){
        //     if(left == k-1 && right == (n-k)){
        //         swap(arr[left],arr[right]);
        //         break;
        //     }
        //         left++;
        //         right--;
            
        // }
        swap(arr[k-1],arr[n-k]);
        
    }
};