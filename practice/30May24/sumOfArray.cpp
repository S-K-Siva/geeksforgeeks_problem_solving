#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    int res = 0;
	    for(int i = 0;i<n;i++){
	        res += arr[i];
	    }
	    return res;
	}
};