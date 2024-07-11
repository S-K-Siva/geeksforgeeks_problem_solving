#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(arr[i] < arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        } 
    }
};