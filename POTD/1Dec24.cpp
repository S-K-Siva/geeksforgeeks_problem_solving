class Solution {
  public:
    // Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string &s) {
        // map<char,int> track;
        // for(int i = 0;i<s.size();i++){
        //     ++track[s[i]];
        // }
        
        // for(int i = 0;i<s.size();i++){
        //     if(track[s[i]] == 1){
        //         return s[i];
        //     }
        // }
        // return '$';
        
        vector<int> track(123,0);
        
        for(int i = 0;i<s.size();i++){
            ++track[(int)s[i]];
        }
        
        for(int i = 0;i<s.size();i++){
            if(track[(int)s[i]] == 1){
                return s[i];
            }
        }
        return '$';
    }
};
