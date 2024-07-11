#include<bits/stdc++.h>
using namespace std;
class Solution{
    int findMaximum(int arr[], int n) {
	    if(arr[n-1] > arr[n-2] && arr[n-1] > arr[n-3]){
	        return arr[n-1];
	    }else{
	        int largest = arr[0];
	        int index = 1;
	        while(index < n){
	           
	            if(arr[index] > largest && arr[index-1] < arr[index]){
	                largest = arr[index];
	            }
	            index++;
	        }
	        return largest;
	    }
	    
	}
};
