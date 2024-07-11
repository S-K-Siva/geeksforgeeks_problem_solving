#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> A, long long N, long long X){
        
        int l = 0;
        int h = N-1;
        
        while(l <= h){
            int mid = l + (h-l)/2;
            
            if(A[mid] == X){
                h = mid;
                break;
            }
            else if(A[mid] < X){
                l = mid+1;
            }else {
                h = mid - 1;
            }
        }
        return h;
        
    }
};