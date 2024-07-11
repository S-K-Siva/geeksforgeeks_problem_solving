#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
	        int mid = v.size()/2;
		    if(v.size()%2 == 0){
		        
		        return (v[mid]+v[mid-1])/2;
		    }
		    return v[mid];
		    
		    
		}
};