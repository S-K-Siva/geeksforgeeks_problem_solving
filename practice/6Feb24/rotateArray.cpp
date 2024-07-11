#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if(d > n){
            d = abs(d%n);
        }
        reverse(arr,arr+n);
        reverse(arr,arr+(abs(n-d)));
        int l = abs(n-d);
        int r = n-1;
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        // for(int i = 0;i<n;i++){
        //     cout << arr[i] << " ";
        // }cout << endl;
    }
};