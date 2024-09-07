#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long findNth(long long n) {
        // Logic is crt for the digit contains 9..
        // Logic is incorrect for the digit that doesn't contain 9..
        
        // long long temp;
        // temp = n;
        // long long is9Exist = 0;
        // long long jump = 0;
        // while(temp != 0){
        //     int rem = temp%10;
        //     if(rem == 9){
        //         is9Exist = 1;
        //     }
        //     else{
        //         jump += rem;
        //     }
        //     temp/=10;
        // }
        // if(is9Exist)
        //     return n+jump+1LL;
        // long long val = jump/9;
        
        // return n+val;
        
        long long base = 1;
        long long result = 0;
        while(n > 0){
            result += (n%9) * base;
            n/=9;
            base *= 10;
        }
        
        return result;
    }
};
