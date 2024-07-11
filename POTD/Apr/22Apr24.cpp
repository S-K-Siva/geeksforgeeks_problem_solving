#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        int res = 1;
        int max_ones = 0;
        for(int i = 0;i<m;i++){
            if(a[0][i]) max_ones++;
        }
        for(int row = 1;row < n;row++){
            int cur = 0;
            for(int col = 0;col<m;col++){
                if(a[row][col]) cur++;
            }
            if(cur < max_ones){
                max_ones = cur;
                res = row+1;
            }
        }
        return res;
    }
};