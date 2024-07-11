#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
class Solution {
  public:
    int padovanSequence(int n) {
        int first = 1;
        int second = 1;
        int third = 1;
        for(int i = 3;i<=n;i++){
            int temp = (first + second)%MOD;
            first = second;
            second = third;
            third = temp;
        }
        return third%MOD;
    }
};