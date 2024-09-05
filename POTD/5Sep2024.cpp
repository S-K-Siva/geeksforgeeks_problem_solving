#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {
        int sum = (n*(n+1))/2;
        int add = 0;
        for(int i = 0;i<arr.size();i++){
            add += arr[i];
        }
        return sum - add;
    }
};
