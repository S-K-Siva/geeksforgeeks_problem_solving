class Solution {
  public:
     bool checkSorted(vector<int> &arr) {

        int noOne=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                swap(arr[i],arr[arr[i]-1]);
                noOne++;
                i--;
            }
            if(noOne > 2)return false;
        }
        return noOne==2|noOne==0;
    }
};
