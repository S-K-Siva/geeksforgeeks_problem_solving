#include<bits/stdc++.h>
#include <list>
using namespace std;


class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        sort(a,a+n);
        
        if(n>=3){
            return a[n-3];
        }
            return -1;
        
    }

};