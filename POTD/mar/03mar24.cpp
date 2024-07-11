#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool compare(string s1, string s2){
	    string ab = s1.append(s2);
	    
	    string ba = s2.append(s1);
	    
	    return ab.compare(ba) > 0 ? 1 : 0;
	}
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(),arr.end(),compare);
	    
	    string result = "";
	    
	    for(int i = 0;i< arr.size();i++){
	        result += arr[i];
	    }
	    
	    return result;
	}
};