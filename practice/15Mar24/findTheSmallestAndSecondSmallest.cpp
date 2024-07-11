#include<bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n) {
    
    // int aa[n];
    
    // for(int i = 0;i<n;i++){
    //     aa[i] = a[i];
    // }
    
    if(n == 1) return {-1};
    sort(a,a+n);
    
    int first = a[0];
    
    int second = a[1];
    if(first == second){
        for(int i = 2;i<n;i++){
            if(a[i] != first){
                second = a[i];
                break;
            }
        }
    }
    if(first == second) return {-1};
    return {first,second};
    
    // vector<int> result(2,-1);
    
    // for(int i = 0;i<n;i++){
    //     if(aa[i] == first){
    //         if(result[0] == -1) result[0] = i;
    //     }
        
    //     if(aa[i] == second){
    //         if(result[1] == -1) result[1] = i;
    //     }
        
        
    // }
    
    // return result;
}