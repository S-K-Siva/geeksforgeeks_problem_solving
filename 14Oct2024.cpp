class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        int hs = 0;
        
        while(head){
            ++hs;
            head = head->next;
        }
        return hs;
    }
};
