class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        a.insert(a.end(),b.begin(),b.end());
        set<int> values(a.begin(),a.end());
        return values.size();
    }
};
