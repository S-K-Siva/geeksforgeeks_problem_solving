#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // int maxLength(string& str) {
    //     int res1,res2,open,close,open1,close1;
    //     open = close = res1 = res2 = open1 = close1 =  0;
    //     int n = str.size();
    //     for(int i = 0;i<n;i++){
    //         if(str[i] == '(') open++;
    //         else close++;
    //         if(close > open){
    //             open = close = 0;
    //         }else if(close == open){
    //             res1 = max(res1, open * 2);
    //         }
            
    //         if(str[n-i-1] == '(') open1++;
    //         else close1++;
    //         if(open1 > close1){
    //             open1 = close1 = 0;
    //         }else if(open1 == close1){
    //             res2 = max(res2, open1 * 2);
    //         }
    //     }
        
    //     return max(res1,res2);
    // }
    int maxLength(string& str) {
        stack<int> ss;
        int n = str.size();
        int res = 0;
        ss.push(-1);
        
        for (int i = 0; i < n; i++) {
            if (str[i] == '(') {
                ss.push(i);
            } else {
                ss.pop(); 
                if (ss.empty()) {
                    ss.push(i); 
                } else {
                    res = max(res, i - ss.top());
                }
            }
        }
    
    return res;
}
};
