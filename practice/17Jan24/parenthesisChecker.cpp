#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        stack<char> ss;
        if(s.size()%2 == 1) return false;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                ss.push(s[i]);
            }else{
                if(ss.empty()) return false;
                if(s[i] == '}'){
                    if(ss.top() == '{'){
                        ss.pop();
                    }else{
                        return false;
                    }
                }else if(s[i] == ')'){
                    if(ss.top() == '('){
                        ss.pop();
                    }else{
                        return false;
                    }
                }else if(s[i] == ']'){
                    if(ss.top() == '['){
                        ss.pop();
                    }else{
                        return false;
                    }
                }
            }
            
        }
        if(ss.size()) return false;
        return true;
    }

};