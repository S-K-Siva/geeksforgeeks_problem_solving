#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeDups(string S) 
	{
	    string res = "";
	    unordered_map<char,int> mp;
	    for(int i = 0;i<S.size();i++){
	        if(mp[S[i]]) continue;
	        res += S[i];
	        mp[S[i]] = 1;
	    }
	    
	    return res;
	}
};