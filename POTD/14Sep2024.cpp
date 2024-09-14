#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:

    void rearrange(vector<int> &arr) {
        queue<int> pos, neg;
        
        for(auto it : arr){
            if(it >= 0){
                pos.push(it);
            }else{
                neg.push(it);
            }
        }
        

        
        for(int i = 0;i<arr.size();i++){
            if(i%2 == 0 && !pos.empty()){
                arr[i] = pos.front();
                pos.pop();
            }else if(i%2 == 0 && pos.empty() && !neg.empty()){
                arr[i] = neg.front();
                neg.pop();
            }
            else if(i%2 == 1 && !neg.empty()){
                arr[i] = neg.front();
                neg.pop();
            }else{
                if(!pos.empty()){
                    arr[i] = pos.front();
                    pos.pop();
                }
            }
        }
        
        
    }
};
