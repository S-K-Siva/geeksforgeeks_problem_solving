class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        a.insert(a.end(),b.begin(),b.end());
        set<int> Set{a.begin(),a.end()};
        return vector<int>{Set.begin(),Set.end()};
    }
};
