#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPalindrome(string s,int i,int j){
        int front = i;
        int rear = j;
        // cout << s << endl;
        while(front <= rear){
            if(s[front] != s[rear]){
                return false;
            }
            front++;
            rear--;
        }
        return true;
    }
    string longestPalin (string S) {
        string result = "";
        for(int i = 0;i<S.size();i++){
            for(int j = i;j<S.size();j++){
                if(j-i+1 < result.size()) continue;
            if(isPalindrome(S,i,j)){
                if(result.size() < (j-i+1)){
                    result = S.substr(i,j-i+1);
                }
            }
            }
        }
        return result;
    }
};