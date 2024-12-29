class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) {
        map<int,int> ss1,ss2;
        
        for(auto it : a){
            ++ss1[it];
        }
        vector<int> result;
        for(auto it : b){
            ++ss2[it];
        }
        
        for(auto it : ss2){
            if(ss1.find(it.first) != ss1.end()){
                result.push_back(it.first);
            }
        }
        return result;
        
        
    }
};
