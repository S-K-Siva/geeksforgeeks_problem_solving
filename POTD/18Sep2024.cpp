#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> ch;
        
        for(int i = 0; i < x.size(); i++) {
        if(ch.empty()) {
            ch.push(x[i]);
        } else {
            if(x[i] == ')') {
                if(ch.top() != '(') return false;
                else ch.pop();
            } else if(x[i] == ']') {
                if(ch.top() != '[') return false;
                else ch.pop();
            } else if(x[i] == '}') {
                if(ch.top() != '{') return false;
                else ch.pop();
            } else {
                ch.push(x[i]);
            }
        }
    }
    
    return ch.empty(); 
    }

};
