#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int IndexAtOne = 0;
        int i;
        for(i = 0;i<arr.size();i++){
            if(arr[i] != 0){
                IndexAtOne = i;
                break;
            }
        }
        int j = i+1;
        for(int i = j;i<arr.size();i++){
            if(arr[i] == 0 && i > IndexAtOne){
                swap(arr[i],arr[IndexAtOne]);
                // find next One position..
                while(arr[IndexAtOne] == 0 && IndexAtOne < arr.size()){
                    IndexAtOne++;
                }
            }
        }
    }
};