class Solution {
  public:

    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        map<int,int> mpp;
        
        for(int i = 0;i<arr.size();i++){
            if(mpp[arr[i]]) return true;
            if(i >= k){
                mpp.erase(arr[i-k]);
            }
            ++mpp[arr[i]];
            
        }
        return false;
    }
};
