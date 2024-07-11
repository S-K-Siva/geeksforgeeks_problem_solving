#include<bits/stdc++.h>
using namespace std;



class Solution{
public:	
	bool sameFreq(string ss)
	{
	    unordered_map<char,int> mp;
	    for(int i = 0;i<ss.size();i++){
	        ++mp[ss[i]];
	    }
	    
	    vector<int> s;
	    for(auto it : mp){
	        s.push_back(it.second);
	    }
	    sort(s.begin(),s.end());
	    
	    if(s.size() == 1) return true;
	    else{
	        
	        set<int> seet;
	        for(auto it : s){
	            seet.insert(it);
	        }
	        int maxi = s[s.size()-1];
	        int mini = s[0];
	        if(maxi == mini) return true;
	        else{
	            if(abs(s[s.size()-2] - s[s.size()-1]) == 1 && seet.size() == 2) return true;
	            if(seet.size() == 2 && abs(s[s.size()-2]-s[s.size()-1]) == 1) return true;
	            if(seet.size() == 2 && s[0] == 1) return true;
	            return false;
	        }
	    }
        return true;
	}
};