#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int number = N;
        int result = 0;
        N%=100005;
        number %= 100005;
        while(number != 0){
            int rem = number%10;
            if(rem != 0 && N%rem == 0){
                result++;
            }
            number/=10;
        }
        return result;
    }
};