class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        sort(intervals.begin(),intervals.end(),[&](vector<int> a,vector<int> b){
            return a[1] < b[1];
        });
        int n = intervals.size();
        int prevEnd = intervals[0][1];
        int cnt = 0;
        for(int i = 1;i<n;i++){
            if(prevEnd > intervals[i][0]){
                ++cnt;
            }else{
                prevEnd = intervals[i][1];
            }
        }
        return cnt;
    }
};
