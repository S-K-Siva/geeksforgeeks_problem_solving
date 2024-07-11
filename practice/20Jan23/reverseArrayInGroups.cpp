#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        if(k >= n){
            reverse(arr.begin(),arr.end());
        }else{
            int i = 0;
            int j = k-1;
            while (i < j && j < n){
                int left = i;
                int right = j;
                while ( left <= right){
                    swap(arr[left],arr[right]);
                    left++;
                    right--;
                }
                i = j+1;
                j += k;
                if(j >= n) j = n-1;
            }
        }
    }
};