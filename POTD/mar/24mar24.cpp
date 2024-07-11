#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int> res;
        while(!st.empty()){
            res.push(st.top());
            st.pop();
        }
        res.push(x);
        
        while(!res.empty()){
            st.push(res.top());
            res.pop();
        }
        return st;
    }
};