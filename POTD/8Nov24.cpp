class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        if(s1.find(s2.front()) == string::npos) return -1;
        
        string checker = "";
        
        int cnt = 0;
        while(checker.size() < s2.size()){
            ++cnt;
            checker += s1;
        }
        
        if(checker.find(s2) != string::npos){
            return cnt;
        }
        
        checker += s1;
         if(checker.find(s2) != string::npos){
            return cnt + 1;
        }
        
        return -1;
    }
};
