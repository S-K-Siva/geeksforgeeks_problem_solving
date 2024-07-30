#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    
    void RatInTheMaze(vector<string>& result,string current,int row,int col,vector<vector<int>>& maze,vector<vector<int>>& visited,int n){
        if(row == n-1 && col == n-1){
            if(find(result.begin(),result.end(),current) == result.end()){
                result.push_back(current);
            }
            return;
        }
        if(row < 0 || col < 0 || row == n || col == n) return;
        visited[row][col] = 1;
        // go left
        if(col-1 >= 0 && maze[row][col-1] && !visited[row][col-1]){
            
            RatInTheMaze(result, current + 'L',row,col-1,maze,visited,n);
            
        }
        // go right
        if(col + 1 < n && maze[row][col+1] && !visited[row][col+1]){
            
            RatInTheMaze(result,current + 'R',row,col+1,maze,visited,n);
            
        }
        
        // go up
        if(row-1 >= 0 && maze[row-1][col] && !visited[row-1][col]){
            
            RatInTheMaze(result,current + 'U',row-1,col,maze,visited,n);
            
        }
        // go down
        if(row + 1 < n && maze[row+1][col] && !visited[row+1][col]){
            
            RatInTheMaze(result,current + 'D', row + 1, col, maze, visited,n);
            
        }
        visited[row][col] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        if(mat[0][0] == 0) return {"-1"};
        vector<string> result;
        int n = mat.size();
        vector<vector<int>> visited(n,vector<int>(n,0));
        
        string S = "";
        RatInTheMaze(result,S,0,0,mat,visited,n);
        sort(result.begin(),result.end());

        return result;
    }
};