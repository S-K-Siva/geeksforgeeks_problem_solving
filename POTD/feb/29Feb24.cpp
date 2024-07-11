#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    long long result = 0;
	    
	    for(int i = 0;i<32;i++){
	        int count = 0;
	        
	        for(int j = 0;j<n;j++){
	            if(arr[j] & (1 << i)){
	                count++;
	            }
	        }
	        
	        result += 2LL * (long long) count * (long long) (n - count);
	    }
	    return result;
	}
};