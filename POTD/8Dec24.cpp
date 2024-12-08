class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        
        stack<pair<int,int>> track;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            
            if(!track.empty() && track.top().second >= arr[i][0] && 
            track.top().second < arr[i][1]){
                track.top().second = arr[i][1];
            }else{
                if(track.empty() || (!track.empty() && track.top().second < arr[i][0]))
                    track.push({arr[i][0],arr[i][1]});
            }
        }
        vector<vector<int>> result;
        while(!track.empty()){
            result.push_back({track.top().first,track.top().second});
            track.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
