#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int i = 1;
    	int j = 0;
    	int platform_cnt = 1;
    	int max_platform = 1;
    	while(i < n && j < n){
    	   
    	    if(arr[i] <= dep[j]){
    	        i++;
    	        platform_cnt++;
    	    }else{
    	        j++;
    	        platform_cnt--;
    	    }
    	    
    	    max_platform = max(max_platform,platform_cnt);
    	}
    	return max_platform;
    }
};