#include<bits/stdc++.h>
using namespace std;


class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr,arr+n);
	    int l = 0,r = n-1;
	    while(l < r){
	        int total = arr[l]+arr[r];
	        if(total == x) return true;
	        if(total > x) r--;
	        else l++;
	    }
	    return false;
	}
};