class Solution {
  public:
    int countgroup(vector<int>& arr) {
        // int n = arr.size();
        
        // vector<int> leftTrack(n,0);
        // vector<int> rightTrack(n,0);
        
        // leftTrack[0] = arr[0];
        // rightTrack[n-1] = arr[n-1];
        // for(int i = 1;i<n;i++){
        //     leftTrack[i] = leftTrack[i-1] ^ arr[i];
        // }
        
        // for(int i = n-2;i>-1;i--){
        //     rightTrack[i] = arr[i] ^ rightTrack[i+1];
        // }
        
        // int cnt = 0;
        
        // for(int i = 0;i<n;i++){
        //     if(i == 0){
        //         if(rightTrack[i+1] == arr[i]) cnt++;
        //     }else if(i == n-1){
        //         if(leftTrack[i-1] == arr[i]) cnt++;
        //     }else{
        //         if(leftTrack[i-1] ^ rightTrack[i+1] == arr[i]) cnt++;
        //     }
        // }
        // return cnt;
        
        long long int MOD = 1000000007;
        
        int n = arr.size();
        int totalXOR = 0;
        for (int i = 0; i < n; i++) {
            totalXOR ^= arr[i];
        }
        if (totalXOR != 0) {
            return 0;
        }
        long long ways = 1;
        
        for (int i = 0; i < n - 1; i++) {
            ways = (ways * 2) % MOD;
        }
        
        return( ways - 1) % MOD;
    }
};
