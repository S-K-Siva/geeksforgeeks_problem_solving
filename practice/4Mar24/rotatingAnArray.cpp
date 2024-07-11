#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        
        reverse(arr,arr+d);
        int l = d;
        int h = n-1;
        while( l <= h) {
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
        reverse(arr,arr+n);
    }
};