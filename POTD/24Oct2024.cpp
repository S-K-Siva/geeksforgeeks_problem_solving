class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        stack<int> ss;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            
            if(ss.empty()){
                
                    ss.push(arr[i]);
                
            }else{
                int elementToInsert = arr[i];
                if(ss.top() == elementToInsert)
                {
                    elementToInsert *= 2;
                    ss.pop();
                    ss.push(elementToInsert);
                    ss.push(0);
                }else{
                    ss.push(elementToInsert);
                }
            }
        }
        
        vector<int> res;
        
        while(!ss.empty()){
            if(ss.top() != 0)
                res.push_back(ss.top());
            ss.pop();
        }
        reverse(res.begin(),res.end());
        while(res.size() < n){
            res.push_back(0);
        }
        return res;
    }
};
