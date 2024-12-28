class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        unordered_map<int,vector<int>> ps;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            ps[arr[i]].push_back(i);
        }
        
        set<vector<int>> res;
        for(int i = 0;i<n-2;i++){
            for(int j = i+1;j<n-1;j++){
                int curr = arr[i] + arr[j];
                if(curr == 0){
                    for(auto k : ps[curr]){
                        if(k != i && k != j && k > j){
                            res.insert({i,j,k});
                        }
                    }
                }else{
                    int find_ = -1 * curr;
                    if(ps.find(find_) == ps.end()) continue;
                    for(auto k : ps[find_]){
                        if(k > j && k != i && k != j){
                            res.insert({i,j,k});
                        }
                    }
                }
            }
            
        }
        
        return vector<vector<int>>(res.begin(),res.end());
    }
};
