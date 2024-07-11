#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        int i = 0;
        int j = 1;
        
        while(i < j && j < n){
            if(arr[i] < arr[j]) return false;
            if(j+1 < n && arr[i] < arr[j+1]) return false;
            i++;
            j+=2;
        }
        return true;
    }
};