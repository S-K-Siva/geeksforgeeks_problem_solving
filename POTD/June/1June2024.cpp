#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string oddEven(string s) {
        int first = 0,second = 0;
        vector<int> vv(27,0);
        
        for(int i = 0;i<s.length();i++){
            vv[s[i]-'a'+1]++;
        }
        
        
        for(int i = 1;i<=26;i++){
            if(vv[i] != 0 && vv[i]%2 == 0 && i%2 == 0){
                first++;
            }
            else if(vv[i]%2 == 1 && i%2 == 1){
                second++;
            }
        }

        int sum = first + second;
        
        if(sum%2 == 1) return "ODD";
        else return "EVEN";
    }
};
// class Solution {
//   public:
//     string oddEven(string s) {
//         // code here
//         int x=0, y=0;
//         vector<int>count(27,0);
//         for(int i=0;i<s.length();i++){
//             count[s[i]-'a'+1]++;
//         }
        
//         for(int i=1;i<=26;i++){
//             if(count[i]!=0 && count[i]%2==0 && i%2==0){
//                 x++;
//             }
//             else if(count[i]%2==1 && i%2==1){
//                 y++;
//             }
//         }
//         int sum = x+y;
//         if(sum%2==1) return "ODD";
//         else return "EVEN";
//     }
// };