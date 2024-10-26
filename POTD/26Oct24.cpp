class Solution {
  public:
    int count(struct Node* head, int key) {
        int done = 0;
        
        struct Node* temp;
        temp = head;
        while(temp){
            if(temp->data == key) done++;
            temp = temp->next;
        }
        return done;
    }
};
