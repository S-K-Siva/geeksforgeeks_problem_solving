class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
         sort(arr.begin(),arr.end());
        int count=0,s=0,n=arr.size()-1;
        while(s<n){
            if(arr[s]+arr[n]>=target) n--;
            else{
                count+=n-s;
                s++;
            }
        }
        return count;
    }
};
