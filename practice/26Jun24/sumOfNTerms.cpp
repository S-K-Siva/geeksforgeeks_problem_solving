#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long val =  ((n*(n+1))/2);
        return val * val;
    }
};