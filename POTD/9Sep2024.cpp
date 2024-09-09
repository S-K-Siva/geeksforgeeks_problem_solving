#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void sort012(vector<int>& arr) {
        int one = 0,two = 0,zero = 0;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i] == 0) zero++;
            if(arr[i] == 1) one++;
            if(arr[i] == 2) two++;
        }
        
        
        int index = 0;
        while(index<arr.size()){
            if(zero){
                arr[index] = 0;
                --zero;
            }else if(one){
                arr[index] = 1;
                --one;
            }else if(two){
                arr[index] = 2;
                --two;
            }
            ++index;
        }
    }
};
