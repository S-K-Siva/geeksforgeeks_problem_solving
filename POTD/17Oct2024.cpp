class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        Node *res1,*res2;
        res1 = new Node(-1);
        res2 = new Node(-1);
        Node *r1,*r2;
        r1 = res1;
        r2 = res2;
        int index = 0;
        while(head != nullptr){
            Node *newNode;
            if(index%2 == 0){
                newNode = new Node(head->data);
                r1->next = newNode;
                r1 = r1->next;
            }else{
                newNode = new Node(head->data);
                r2->next = newNode;
                r2 = r2->next;
            }
            head = head->next;
            ++index;
        }
        
        return {res1->next,res2->next};
    }
};
