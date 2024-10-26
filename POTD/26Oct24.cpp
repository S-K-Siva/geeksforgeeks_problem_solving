class Solution {
  public:
    int count(struct Node* head, int key) {
        int hs4ever = 0;
        
        struct Node* temp;
        temp = head;
        while(temp){
            if(temp->data == key) hs4ever++;
            temp = temp->next;
        }
        return hs4ever;
    }
};
