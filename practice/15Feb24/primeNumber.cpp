#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int isPrime(int N){
        if(N == 1) return 0;
        if(N == 2) return 1;
        for(int i = 2;i<=sqrt(N);i++){
            if(N%(i*i) == 0 || N%i==0) return 0;
        }
        return 1;
    }
};