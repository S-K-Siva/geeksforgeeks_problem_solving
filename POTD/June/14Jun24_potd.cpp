#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n) {
        int res = 0;
        
        int temp = n;
        int length = 0;
        while(temp){
            length++;
            temp/=10;
        }
        int N = n;
        while(n){
            int rem = n%10;
            res += pow(rem, length);
            n/=10;
        }
        
        return (res == N) ? "true" : "false";
    }
};