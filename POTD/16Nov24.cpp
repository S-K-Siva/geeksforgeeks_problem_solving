class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int i,j;
        i = j = 0;
        int n = arr.size();
        
        while(arr[i] != 0){
            ++i;
            j = i + 1;
        }
        
        while(i <= j && j < n){
            while(arr[j] == 0){
                j++;
                if(j >= n) break;
            }
            if(j >= n) break;
            
            swap(arr[i],arr[j]);
            while(arr[i] != 0){
                i++;
            }
        }
        
    }
};
