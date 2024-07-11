#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> pos,neg;
        
        for(int i = 0;i<n;i++){
            if(arr[i] >= 0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        
        int index = 0;
        
        while(index < n){
            for(int i = 0;i<pos.size();i++){
                arr[index] = pos[i];
                index++;
            }
            for(int i = 0;i<neg.size();i++){
                arr[index] = neg[i];
                index++;
            }
        }
        
    }
};