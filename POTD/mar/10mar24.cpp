#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	string removeDuplicates(string str) {
	    string result = "";
	    
	    unordered_map<char,int> mp;
	    
	    for(int i = 0;i<str.size();i++){
	        if(mp[str[i]]) continue;
	        result += str[i];
	        mp[str[i]] = 1;
	    }
	    
	    return result;
	}
};