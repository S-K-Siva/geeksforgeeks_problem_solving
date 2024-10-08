class Solution {
  public:
    int pairsum(vector<int> &arr) {
        int m1,m1Index;
        m1 = m1Index = 0;
        int index = 0;
        for(auto it : arr){
            if(m1 < it){
                m1 = it;
                m1Index = index;
            }
            ++index;
            
        }
        
        int m2 = 0;
        
        for(int i = 0;i<arr.size();i++){
            if(arr[i] <= m1 && i != m1Index){
                if(arr[i] > m2){
                    m2 = arr[i];
                }
            }
        }
        
        return m1 + m2;
        
    }
};
