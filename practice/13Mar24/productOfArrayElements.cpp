#include<bits/stdc++.h>
using namespace std;

long long int product(int ar[], int n, long long int mod)
 {
     
     long long int result = 1;
     
     for(int i = 0;i<n;i++){
         result = (result * ar[i])%mod;
     }
     
     return (long long int) result%mod;
     
 }