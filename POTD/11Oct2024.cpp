class Solution {
  public:
    // TLE
    // vector<int> rearrange(const vector<int>& arr) {
    //     vector<int> res(arr.size(),-1);
        
    //     map<int,int> track;
    //     for(auto it : arr){
    //         ++track[it];
    //     }
        
    //     for(int i = 0;i<arr.size();i++){
    //         if(track[i]){
    //             res[i] = i;
    //             if(track[i] == 1){
    //                 track.erase(i);
    //             }else{
    //                 --track[i];
    //             }
    //         }else{
    //             res[i] = -1;
    //         }
            
    //     }
    //     return res;
    // }
    
    vector<int> rearrange(vector<int>& arr) {
        int n = arr.size();
        
        for (int i = 0; i < n; ++i) {
            while (arr[i] != i && arr[i] >= 0 && arr[i] < n && arr[arr[i]] != arr[i]) {
                swap(arr[i], arr[arr[i]]);
            }
        }
    
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i) {
                arr[i] = -1;
            }
        }
        
        return arr;
    }
};
