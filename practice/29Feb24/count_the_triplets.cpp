#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    int cnt = 0;
	    sort(arr,arr+n);
	    
	    int max = arr[n-1]+arr[n-2];
	    
	    unordered_map<int,int> mp;
	    
	    for(int i = 0;i<n;i++){
	        mp[arr[i]] = 1;
	    }
	    for(int i = 0;i<n;i++){
	        for(int j = i+1;j<n;j++){
	            int element = arr[i]+arr[j];
	            if(element > max){
	                break;
	            }
	            if(mp[element]){
	                cnt++;
	            }
	            
	        }
	    }
	    return cnt;
	}
};