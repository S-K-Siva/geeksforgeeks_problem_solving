#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string smallestNumber(int s, int d) {
        long long int start = pow(10,d-1);
        long long int end = pow(10,d);
        
        for(int i = start;i<end;i++){
            
            long long int num = i;
            long long int total = 0;
            while(num != 0){
                total += (num%10);
                num/=10;
            }
            // cout << total << endl;
            if(total == s){
                return to_string(i);
            }
        }
        return "-1";
    }   
};