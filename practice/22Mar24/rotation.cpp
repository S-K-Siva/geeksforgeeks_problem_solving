#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int minElement = INT_MAX;
	    int l = 0;
	    int h = n-1;
	    while(l <= h){
	        minElement = min(minElement,min(arr[l],arr[h]));
	        l++;
	        h--;
	    }
	    
	    int cnt = 0;
	    for(int i = 0;i<n;i++){
	        if(arr[i] != minElement){
	            cnt++;
	        }else{
	            break;
	        }
	    }
	    
	    return cnt;
	}

};