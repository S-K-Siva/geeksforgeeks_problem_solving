class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count = 0;
        for(auto it : arr){
            if(it == target) count++;
        }
        return count;
    }
};
