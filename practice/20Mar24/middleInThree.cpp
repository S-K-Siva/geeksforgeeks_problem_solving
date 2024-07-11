#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int middle(int A, int B, int C){
        int mini = min(A,min(B,C));
        if(mini == A){
            return min(B,C);
        }else if( mini == B){
            return min(A,C);
        }else if(mini == C){
            return min(A,B);
        }
        return 0;
    }
};