#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        
        for(int i = 0;i<n-1;i++){
            if(a[i] == b[i]) continue;
            else return i;
        }
        return n-1;
        
    }
};