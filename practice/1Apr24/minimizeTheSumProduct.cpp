#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        long long int result = 0;
        for(int i = 0;i<n;i++){
            result += a[i]*b[i];
        }
        
        return result;
    }
};