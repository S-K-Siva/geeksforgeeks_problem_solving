#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int> pos;
	    vector<int> neg;
	    for(int i =0;i<n;i++){
	        if(arr[i]<0){
	            neg.push_back(arr[i]);
	        }else{
	            pos.push_back(arr[i]);
	        }
	    }
	    int ind = 0;
	    int ind1 = 0;
	    int i;
	    for(i = 0;i<n && ind < pos.size() && ind1 < neg.size();i+=2){
	        arr[i] = pos[ind];
	        arr[i+1] = neg[ind1];
	        ind++;
	        ind1++;
	    }
	    
	    while(ind < pos.size()){
	        arr[i] = pos[ind];
	        i++;
	        ind++;
	    }
	    
	    while(ind1 < neg.size()){
	        arr[i] = neg[ind1];
	        i++;
	        ind1++;
	    }
	    
	}
};