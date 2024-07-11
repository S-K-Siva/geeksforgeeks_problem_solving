#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char> ch_stack;
    
    
    for(int i = 0;i<len;i++){
        ch_stack.push(*(S+i));
    }
    int index = 0;
    while(!ch_stack.empty()){
        *(S+index) = ch_stack.top();
        ch_stack.pop();
        index++;
    }
    return S;
}