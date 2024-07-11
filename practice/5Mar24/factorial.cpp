#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    long long int factorial(int N){
        vector<long long int> arr(N+1,1);
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2;i<=N;i++)
        {
            arr[i] = (i*arr[i-1]);
        }
        
        return (long long int) arr[N];
    }
};