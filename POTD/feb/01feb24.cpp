#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        vector<int> arr(26,0);
        for(int i = 0;i<s.size();i++){
            if(isalpha(tolower(s[i]))){
                if(!arr[tolower(s[i])-'a'] && (tolower(s[i])-'a' >= 0 && tolower(s[i])-'a' <= 26)){
                    ++arr[tolower(s[i]) - 'a'];
                }
            }
        }
        // for(auto it : arr){
        //     cout << it << endl;
        // }
        int total = accumulate(arr.begin(),arr.end(),0);
        // cout << total << endl;
        return total == 26;
        
    }

};