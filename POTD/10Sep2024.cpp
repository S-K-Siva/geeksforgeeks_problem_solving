class Solution {
  public:
    int isCircle(vector<string> &arr) {
        unordered_map<char,vector<int>> mpp;
        int n = arr.size();
        vector<int> outFreq(26,0), inFreq(26,0);
        for(int i = 0;i<n;i++){
            mpp[arr[i][0]].push_back(i);
            ++outFreq[arr[i][0] -'a'];
            ++inFreq[arr[i].back() - 'a'];
        }
        
        for(int i = 0;i<26;i++){
            if(outFreq[i] != inFreq[i]) return 0;
        }
        
        queue<int> que;
        que.push(0);
        vector<int> vis(n,0);
        vis[0] = 1;
        int res = 1;
        while(!que.empty()){
            int curr = que.front();
            que.pop();
            int nextChar = arr[curr].back();
            for(auto x : mpp[nextChar]){
                if(!vis[x]){
                    vis[x] = 1;
                    ++res; // counts the no of strings visited successfully!
                    que.push(x);
                }
            }
        }
        return (res == n) ? 1 : 0;
    }
};
