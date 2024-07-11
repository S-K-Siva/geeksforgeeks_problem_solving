#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> result;
		    
		    int n = s.size();
		    for(int i = 0;i<=(pow(2,n)-1);i++){
		        string ss = "";
                for(int j = 0;j<n;j++){
                    if(i & (1 << j)){
                        ss += s[j];
                    }
                }
                result.push_back(ss);
		    }
		    sort(result.begin(),result.end());
		    result.erase(result.begin());
		    return result;
		}
};