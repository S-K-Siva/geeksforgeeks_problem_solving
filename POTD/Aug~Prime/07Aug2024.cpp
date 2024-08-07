#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int kthElement(int k, vector<int>& arr1, vector<int>& arr2) {
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        sort(arr1.begin(),arr1.end());
        return arr1[k-1];
    }
};