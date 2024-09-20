#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &heights) {
        int first = heights[0];
        int cnt = 1;
        
        
        for(int i = 1;i<heights.size();i++)
        {
            if(heights[i] > first){
                cnt++;
                first = heights[i];
            }
        }
        
        return cnt;
    }
};
