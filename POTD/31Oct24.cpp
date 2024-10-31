class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        Node* newHead;
        newHead = getNode(-1);
        newHead->next = head;
        Node* temp;
        temp = newHead;
        bool inserted = false;
        while(temp->next != nullptr){
            if(temp->next->data >= x){
                Node* newNode;
                newNode = getNode(x);
                Node* newNodeNext;
                newNodeNext = temp->next;
                newNode->next = newNodeNext;
                temp->next = newNode;
                inserted = true;
                break;
            }
            temp = temp->next;
        }
        
        if(!inserted){
            Node *newNode;
            newNode = getNode(x);
            temp->next = newNode;
        
        }
        
        return newHead->next;
        
        
    }
};
