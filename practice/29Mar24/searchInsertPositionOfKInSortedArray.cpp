#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        int i;
        for(i = 0;i<N;i++){
            if(Arr[i] >= k) break;
        }
        
        return i;
    }
};