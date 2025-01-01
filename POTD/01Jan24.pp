class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
 
       map<string,vector<string>> track;
       for(int i = 0;i<arr.size();i++){
           string key = arr[i];
           sort(key.begin(),key.end());
           track[key].push_back(arr[i]);
       }
       
       vector<vector<string>> result;
       
       for(auto it : track)
       {
           vector<string> row = it.second;
        //   sort(row.begin(),row.end());
           result.push_back(row);
       }
       return result;
    }
};
