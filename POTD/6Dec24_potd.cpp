class Solution {
  public:
    // Function to find hIndex
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        if(n == 0) return 0;
        sort(citations.begin(),citations.end(),greater<int>());
        for(int i = 0;i<n;i++){
            if(citations[i] < i+1) return i;
        }
        return n;
    }
};
