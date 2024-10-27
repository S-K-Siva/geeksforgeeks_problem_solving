class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i = arr.size()-1;i>=0;i--){
            int target = arr[i];
            
            int left = 0;
            int right = i-1;
            
            while(left < right){
                int curr = arr[left]+arr[right];
                if(curr == target){
                    return true;
                }
                else if(curr < target){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return false;
    }
};
