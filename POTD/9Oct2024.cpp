class Solution {
  public:
    
    // TLE
    // Node* solve(vector<vector<int>> mat,int row,int col)
    // {
    //     if(col >= mat[0].size() || row >= mat.size()) return nullptr;
    //     Node *track;
    //     track = new Node(mat[row][col]);
    //     track->right = solve(mat,row,col+1);
    //     track->down = solve(mat,row+1,col);
        
    //     return track;
    // }
    
    
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        vector<vector<Node*>> MMatrix(mat.size(),vector<Node*>(mat[0].size()));
        
        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                MMatrix[i][j] = new Node(mat[i][j]);
            }
        }
        
        for(int i = 0;i<=mat.size()-1;i++){
            for(int j = 0;j<=mat[0].size()-1;j++){
                if(j+1 >= mat[0].size()){
                    MMatrix[i][j]->right = nullptr;
                }else{
                    MMatrix[i][j]->right = MMatrix[i][j+1];
                }
                
                if(i+1 >= mat.size()){
                    MMatrix[i][j]->down = nullptr;
                }else{
                    MMatrix[i][j]->down = MMatrix[i+1][j];
                }
            }
        }
        
        
        return MMatrix[0][0];
        
    }
};
