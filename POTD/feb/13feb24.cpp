#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    long long sequence(int n){
        long long  mod = 1000000007;
        long long  number = 1;
        long long total = 0;
        for(int i = 1;i<=n;i++){
            long long currentTotal = 1;
            int length = i;
            while(length--){
                currentTotal *= number;
                currentTotal %= mod;
                number++;
            }
            total = (total%mod + currentTotal%mod) % mod;
            
        }
        return total;
    }
};