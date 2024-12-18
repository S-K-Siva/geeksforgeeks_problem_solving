class Solution {
  public:
    bool isPossible(vector<int>&arr, int weightage, int k){
        int students = 1;
        int current = 0;
        
        for(auto it : arr){
            if(it > weightage) return false;
            if(current + it > weightage){
                ++students;
                current = it;
                if(students > k) return false;
            }else{
                current += it;
            }
        }
        return true;
    }
    int findPages(vector<int> &arr, int k) {
        if(arr.size() < k) return -1;
        int low,high;
        low = *max_element(arr.begin(),arr.end());
        high = accumulate(arr.begin(),arr.end(),0);
        int result = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(isPossible(arr,mid,k)){
                result = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        if(result == high){
            if(k == 1){
                return high;
            }else{
                return -1;
            }
        }
        return result;
    }
};
