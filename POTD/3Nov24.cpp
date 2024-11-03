class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        Node* temp;
        temp = *head;
        int length = 0;
        while(temp){
            ++length;
            temp = temp->next;
        }
      
        return length%2 == 0;
    }
};
