class Solution{
public:
    vector<int> removeDuplicate(vector<int>& arr) {
        vector<int> vals;
        for(auto it : arr){
            if(find(vals.begin(),vals.end(),it) == vals.end()){
                vals.push_back(it);
            }
        }
        return vals;
    }
};
