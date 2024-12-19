class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int maxElement = *max_element(arr.begin(),arr.end());
        unordered_map<int,int> freq;
        for(auto it : arr){
            ++freq[it];
        }
        vector<int> track;
        
        for(int i = 1;i<maxElement;i++){
            if(freq.find(i) == freq.end()){
                track.push_back(i);
            }
        }
        
        if(k <= track.size()) return track[k-1];
        
        for(int i = track.size();i<=k;i++){
            track.push_back(maxElement++);
        }
        
        return track[k];
    }
};
