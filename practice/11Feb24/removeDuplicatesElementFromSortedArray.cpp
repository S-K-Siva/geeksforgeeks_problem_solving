#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int remove_duplicate(int a[],int n){
        int l = 0,r = 1;
        int cnt = 1;
        while(l < r && r < n){
            if(a[l] == a[r]){
                r++;
                continue;
                
            }else{
                if(l+1 < n)
                    swap(a[l+1],a[r]);
                cnt++;
                l++;
                r++;
            }
        }
        return cnt;
    }
};