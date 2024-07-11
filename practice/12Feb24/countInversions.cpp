#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long int mergeArray(long long arr[], int low, int middle,int high){
       
       long long leftArrayLength = middle - low + 1;
        long long rightArrayLength = high - middle;
        long long int count = 0;
        vector<long long> leftArray(leftArrayLength,0);
        vector<long long> rightArray(rightArrayLength,0);
         int lai = 0,rai = 0;
        for(int i = low;i<=middle;i++){
            leftArray[lai] = arr[i];
            lai++;
        }
        
        for(int i = middle+1;i<=high;i++){
            rightArray[rai] = arr[i];
            rai++;
        }
        
         int leftArrayCount,rightArrayCount,arrayCount;
        leftArrayCount = rightArrayCount = 0;
        arrayCount = low;
        
        while(leftArrayCount < leftArrayLength && rightArrayCount < rightArrayLength){
            if(leftArray[leftArrayCount] <= rightArray[rightArrayCount]){
                arr[arrayCount] = leftArray[leftArrayCount];
                leftArrayCount++;
            }else{
                count += (leftArrayLength - leftArrayCount);
                arr[arrayCount] = rightArray[rightArrayCount];
                rightArrayCount++;
            }
            arrayCount++;
        }
        
        while(leftArrayCount < leftArrayLength){
            arr[arrayCount] = leftArray[leftArrayCount];
            arrayCount++;
            leftArrayCount++;
        }
        
        while(rightArrayCount < rightArrayLength){
            arr[arrayCount] = rightArray[rightArrayCount];
            arrayCount++;
            rightArrayCount++;
        }
   
  
        return count;
    }
    long long int mergeSort(long long *arr,int low,int high){
        
        long long int cnt = 0;
        if(low >= high) return cnt;
        int middle = low + (high - low)/2;
        cnt += mergeSort(arr,low,middle);
        cnt += mergeSort(arr,middle+1,high);
        cnt += mergeArray(arr,low,middle,high);
        return cnt;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long int res = mergeSort(arr,0,N-1);
        return res;
    }

};