class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        priority_queue<int> maxi;
        priority_queue<int,vector<int>,greater<int>> mini;
        
        for(auto it : arr){
            maxi.push(it);
            mini.push(it);
        }
        
        vector<int> res;
        while(res.size() != arr.size()){
            int top1,top2 ;
            top1 = maxi.top();
            top2 = mini.top();
            if(top1 == top2){
                res.push_back(top1);
                break;
            }
            maxi.pop();
            mini.pop();
            res.push_back(top1);
            res.push_back(top2);
        }
        return res;
    }
};
