#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // correct solution if only one distinct element present in it.
    
    // int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
    //     unordered_map<int,int> mpp;
        
    //     for(auto it : arr1){
    //         mpp[it] = 1;
    //     }
        
    //     int commonIndexOfArr2 = -1;
        
    //     int arr2LeftSum = 0;
    //     int arr2RightSum = 0;
    //     int i;
    //     for( i = 0;i<arr2.size();i++){
    //         if(mpp[arr2[i]]){
    //             commonIndexOfArr2 = i;
    //             break;
    //         }else{
    //             arr2LeftSum += arr2[i];
    //         }
    //     }
        
    //     for(int k = i+1;k<arr2.size();k++){
    //         arr2RightSum += arr2[k];
    //     }
        
    //     int arr1LeftSum = 0;
    //     int arr1RightSum = 0;
        
       
    //     for(i = 0;i<arr1.size();i++){
    //         if(arr1[i] == arr2[commonIndexOfArr2]){
    //             break;
    //         }else{
    //             arr1LeftSum += arr1[i];
    //         }
    //     }
        
    //     for(int k = i+1;k<arr1.size();k++){
    //         arr1RightSum += arr1[k];
    //     }
        
    //     return max((arr1LeftSum + arr2RightSum + arr2[commonIndexOfArr2]),(arr1RightSum + arr2LeftSum + arr2[commonIndexOfArr2]));
    // }
    
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        
        int i = 0,j = 0, sum1 = 0, sum2 = 0;
        
        int n = arr1.size(), m = arr2.size();
        int result = 0;
        while(i < n && j < m){
            if(arr1[i] < arr2[j]){
                sum1 += arr1[i];
                i++;
            }else if(arr1[i] > arr2[j]){
                sum2 += arr2[j];
                j++;
            }else{
                // traversing all common distinct values.
                result += max(sum1,sum2) + arr2[j];
                i++;
                j++;
                sum1 = sum2 = 0;
            }
            
        }
        
        while( i < n ){
            sum1 += arr1[i];
            i++;
        }
        
        while( j < m ){
            sum2 += arr2[j];
            j++;
        }
        
        result += max(sum1,sum2);
        return result;
    }
};
