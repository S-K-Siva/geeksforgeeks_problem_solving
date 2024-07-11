#include<bits/stdc++.h>
#define ll long long int
using namespace std;
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        return A == B;
    }
};