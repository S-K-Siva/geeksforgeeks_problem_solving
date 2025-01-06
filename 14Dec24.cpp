class Solution {
  public:
    int search(vector<int>& arr, int key) {
       int res = -1;
       for(int i = 0;i<arr.size();i++){
           if(arr[i] == key){
               res = i;
               break;
           }
       }
       return res;
    }
};
