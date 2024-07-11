#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	

    void helper(vector<string> &res, int zeros, int ones, string current, int n){
        if(ones < zeros) return;
        if(zeros+ones == n){
            res.push_back(current);
            return;
        }
        
        helper(res,zeros+1,ones,current+"0",n);
        helper(res,zeros,ones+1,current+"1",n);
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string> result;
	    helper(result,0,0,"",n);
	    
	    reverse(result.begin(),result.end());
	    return result;
	}
};