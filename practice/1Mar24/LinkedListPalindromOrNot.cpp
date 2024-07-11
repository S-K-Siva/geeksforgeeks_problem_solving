#include<bits/stdc++.h>
using namespace std;


struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        string s = "";
        Node *temp;
        temp = head;
        while(temp != NULL){
            s += to_string(temp->data);
            temp = temp->next;
        }
        string new_string = "";
        for(int i = s.size()-1;i>-1;i--){
            new_string += s[i];
        }
        return new_string == s;
        
    }
};