class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    
    
    void solve(struct Node *head, int& n,int& total){
        if(head == nullptr) return;
        solve(head->next,n,total);
        if(n >= 1){
            total += head->data;
            --n;
        }
    }
    int sumOfLastN_Nodes(struct Node* head, int n) {
        int total = 0;
        solve(head, n , total);
        return total;
    }
};
