#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long reversedBits(long long x) {
        
        string result = "";
        
        long long temp;
        temp = x;
        
        while(temp != 0){
            if(temp%2)
                result += "1";
            else
                result += "0";
                
            temp /= 2;
        }
        for(int i = (31 - result.size());i>-1;i--){
            result += "0";
        }
        
        // cout << result << endl;
        long long res = 0;
        int index = 0;
        for(int i = 31;i>=0;i--){
            if(result[index] == '1'){
                // cout << " 2 pow of " << i << " :"<<pow(2,i)<<endl;
                res += pow(2,i);
            }
            index++;
        }
        
        
        return res;
    }
};