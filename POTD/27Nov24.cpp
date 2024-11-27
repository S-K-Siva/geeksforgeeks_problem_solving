class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        unordered_map<int,int> track;
        
        for(auto it : arr){
            if(track.find(it) == track.end()){
                track[it] = 1;
            }
        }
        
        for(int i = 1;i<=arr.size();i++){
            if(track.find(i) == track.end()) return i;
        }
        return arr.size()+1;
    }
};
