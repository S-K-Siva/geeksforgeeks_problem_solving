#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1];
    }
};