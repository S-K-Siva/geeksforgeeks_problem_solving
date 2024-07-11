class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        unordered_map<int,int> mp;
        for(int i =0;i<n;i++){
            if(mp[a[i]]) ++mp[a[i]];
        }
        
        for(int i = 0;i<m;i++){
            if(mp[b[i]]) ++mp[b[i]];
        }
        return mp.size();
    }
};