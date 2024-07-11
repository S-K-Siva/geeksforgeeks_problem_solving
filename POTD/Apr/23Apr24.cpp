// practice problem - easy level...
// potd = is hard level :(

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfNaturals(int n) {
       long ans = (long) n * (long)(n+1);
       ans/=2;
       return ans%1000000007;
    }
};