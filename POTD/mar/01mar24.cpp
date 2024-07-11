#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
        int i;
        for(i = 1;i<n-1;i++){
            if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
                return i;
            }
        }
        // cout <<i<<endl;
       return n-1;
    }
};