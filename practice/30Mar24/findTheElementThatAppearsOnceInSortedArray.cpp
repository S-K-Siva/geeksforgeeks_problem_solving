#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        sort(arr,arr+n);
        int firstElement = arr[0];
        
        
        
        for(int i = 1;i<n;i++){
            if(firstElement == -1){
                firstElement = arr[i];
            }
            else if(firstElement == arr[i]){
                firstElement = -1;
            }
        }
        return firstElement;
    }
};