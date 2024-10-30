class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        
        for(auto it : arr){
            ++freq[it];
        }
        
        int peace = 0;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(freq.find(arr[i]+k) != freq.end()){
                peace += freq[arr[i]+k];
            }
            
        }
        
        return peace;
    }
};
