#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        int neg = 0;
        if(s[0] == '-')
        {
            neg=1;
            s = s.substr(1);
        }
        if(all_of(s.begin(),s.end(),::isdigit)){
            int num = stoi(s);
            if(!neg)
                return num;
            else
                return -1*num;
        }else{
            return -1;
        }
    }
};