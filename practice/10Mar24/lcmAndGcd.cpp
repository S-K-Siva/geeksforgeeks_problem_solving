#include<bits/stdc++.h>
using namespace std;

class Solution {

  public:
    long long gcd(long long a,long long b){
        return __gcd(a,b);
    }
    
    long long lcm(long long a,long long b){
        return (long long)(a*b)/gcd(a,b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        return {lcm(A,B),gcd(A,B)};
    }
};