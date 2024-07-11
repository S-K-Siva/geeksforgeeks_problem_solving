#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    // int select(int arr[], int i)
    // {
    //     // code here such that selectionSort() sorts arr[]
    // }
     
    void selectionSort(int arr[], int n)
    {
       for(int i = 0;i<n;i++){
           int el = arr[i];
           int idx = i;
           for(int j = i+1;j<n;j++){
               el = min(el,arr[j]);
               if(el == arr[j]){
                   idx = j;
               }
           }
           
           swap(arr[i],arr[idx]);
       }
       
    }
};