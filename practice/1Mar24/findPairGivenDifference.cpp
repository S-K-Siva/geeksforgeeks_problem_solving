#include<bits/stdc++.h>
using namespace std;


bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int cnt = 0;
    unordered_map<int,int> mp;
    
    for(int i = 0;i<size;i++){
        ++mp[arr[i]];
    }
    for(int i = 0;i<size;i++){
        if(n != 0){
            if(mp[abs(arr[i] - n)]){
                cnt++;
                --mp[abs(arr[i] - n)];
            }
            
        }
        else{
            if(mp[arr[i]] > 1){
                cnt++;
                --mp[arr[i]];
            }
        }
    }
    // cout << cnt << endl;
    // if(cnt == size) cnt = 0;
    // if(n == 0){
    //     cnt/=2;
    // }
    
    // cout << cnt << endl;
    return cnt;
}


int main(){
    return 0;
}