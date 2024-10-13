#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void deleteAlt(struct Node *head) {
        Node *m;
        m = head;
        
        while(m != nullptr){
            if(m->next){
                Node *val;
                val = m->next;
                m->next = val->next;
                delete val;
            }else{
                m->next = nullptr;
            }
            m = m->next;
        }
    }
};
