class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        unordered_map<Node*,int> track;
        
        Node *temp;
        temp = head1;
        
        while(temp){
            ++track[temp];
            temp = temp->next;
        }
        
        temp = head2;
        
        while(temp){
            if(track[temp]){
                return temp->data;
            }
            temp = temp->next;
        }
        return -1;
    }
};
