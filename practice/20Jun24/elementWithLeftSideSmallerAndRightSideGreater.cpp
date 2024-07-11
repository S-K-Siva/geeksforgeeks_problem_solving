#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n) {
    vector<int> left(n,0), right(n,0);
    left[0] = arr[0];
    right[n-1] = arr[n-1];
 
    for(int i = 1;i<n;i++){
        left[i] = max(left[i-1],arr[i]);
       
    }
    for(int i = n-2;i>-1;i--){
        right[i] = min(right[i+1],arr[i]);
        
    }
    for(int i= 1;i<n-1;i++){
        if(left[i] == right[i]) return arr[i];
    }
    return -1;
}