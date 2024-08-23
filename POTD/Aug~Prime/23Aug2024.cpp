
vector<int> leftView(Node *root)
{
   vector<int> result;
   
   queue<Node*> que;
   que.push(root);
   
   while(!que.empty()){
       queue<Node*> temp;
       result.push_back(que.front()->data);
       while(!que.empty()){
        Node* current;
       current = que.front();
       que.pop();
       if(current->left)
        {
            temp.push(current->left);
        }
        if(current->right){
            temp.push(current->right);
        }
       }
       que = temp;
   }
   return result;
}
