#include<bits/stdc++.h>
using namespace std;


// class Solution
// {
//     public:
    
    // Correct solution but it's greedy way, it current best, not all time minimum
    
    // int minimumCostPath(vector<vector<int>>& grid) 
    // {
    //     int row = 0, col = 0;
    //     int cost = 0;
    //     int n = grid.size();
    //     int m = grid[0].size();
    //     while(row < n && col < m){
    //         // cout << "(" << row << " , " << col << ")" << endl;
    //         if(row == n-1 && col == m-1){
    //             // cost += grid[row][col];
    //             break;
    //         }
    //         cost += grid[row][col];
    //         int mx,my,hx,hy;
    //         mx = row+1;
    //         my = col;
    //         hx = row;
    //         hy = col+1;
    //         // cout << "(" << mx << " , " << my << " ) " << endl;
    //         // cout << "(" << hx << " , " << hy << " ) " << endl;
    //         int selectedX,selectedY;
    //         if(mx == n || my == m){
         
    //             selectedX = hx;
    //             selectedY = hy;
    //         }else if(hx == n || hy == m){
                
    //             selectedX = mx;
    //             selectedY = my;
    //         }else{
                
    //             if(grid[hx][hy] < grid[mx][my]){
    //                 selectedX = hx;
    //                 selectedY = hy;
    //             }else{
    //                 selectedX = mx;
    //                 selectedY = my;
    //             }
                
    //         }
    //         // cout << "next : " << "(" << selectedX << " , " << selectedY << ")" << endl;
    //         row = selectedX;
    //         col = selectedY;
    //     }
        
    //     return cost + grid[n-1][m-1];
    // }
    
    // TLE
    
//     void solve(vector<int>& res, int row, int col, int n, int m, int currentCost, vector<vector<int>>& grid, vector<vector<int>>& vis) {

//     if (row < 0 || col < 0 || row >= n || col >= m) return;
    

//     if (vis[row][col] == 1) return;


//     if (row == n - 1 && col == m - 1) {
//         res[0] = min(res[0], currentCost + grid[row][col]);
//         return;
//     }


//     vis[row][col] = 1;

//     solve(res, row + 1, col, n, m, currentCost + grid[row][col], grid, vis); // Down
//     solve(res, row, col + 1, n, m, currentCost + grid[row][col], grid, vis); // Right
//     solve(res, row - 1, col, n, m, currentCost + grid[row][col], grid, vis); // Up
//     solve(res, row, col - 1, n, m, currentCost + grid[row][col], grid, vis); // Left

//     vis[row][col] = 0;
// }





// int minimumCostPath(vector<vector<int>>& grid) {
//     int n = grid.size();
//     int m = grid[0].size();
    
    // TLE
    // vector<int> result(1, INT_MAX);
    // vector<vector<int>> visited(n, vector<int>(m, 0));
    // solve(result, 0, 0, n, m, 0, grid, visited);
    // return result[0];
    
    
    // wrong answer :( testcase 1014
    // vector<vector<int>> dp(n,vector<int>(m,0));
    //     dp[0][0] = grid[0][0];
    //     for(int i = 0;i<n;i++){
    //         for(int j = 0;j<m;j++){
    //             if (i == 0 && j == 0) continue;

    //             if (i == 0) {
    //                 dp[i][j] = dp[i][j-1] + grid[i][j];
    //             } else if (j == 0) {
    //                 dp[i][j] = dp[i-1][j] + grid[i][j];
    //             } else {
    //                 dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
    //             }
                        
    //         }
    //     }
    // return dp[n-1][m-1];
    
    
    // wrong answer :( again test case 1014
    // vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
    // dp[0][0] = grid[0][0];
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<m;j++){
    //         if(i > 0){
    //             dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
    //         }
    //         if(j > 0){
    //             dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
    //         }
    //     }
    // }
    // return dp[n-1][m-1];

// }

// };

// Optimal Ones(ref)

class Solution {
public:
    // Direction vectors for moving up, down, left, and right.
    vector<int> dx = {-1, 1, 0, 0};
    vector<int> dy = {0, 0, -1, 1};
    
    // Function to check if cell indexes are within bounds.
    bool isValid(int x, int y, int n, int m) {
        return (x >= 0 && x < n && y >= 0 && y < m);
    }

    int minimumCostPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // Priority queue to store cells based on the minimum cost to reach them.
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        
        // Distance array initialized to a large value.
        vector<vector<int>> distance(n, vector<int>(m, INT_MAX));
        distance[0][0] = grid[0][0];
        
        // Start from the top-left cell.
        pq.push({grid[0][0], {0, 0}});
        
        while (!pq.empty()) {
            auto current = pq.top();
            pq.pop();
            
            int curDist = current.first;
            int x = current.second.first;
            int y = current.second.second;
            
            // Explore all four possible directions.
            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];
                
                if (isValid(newX, newY, n, m)) {
                    int newDist = curDist + grid[newX][newY];
                    
                    // If a shorter path to the cell is found, update it and push to the priority queue.
                    if (newDist < distance[newX][newY]) {
                        distance[newX][newY] = newDist;
                        pq.push({newDist, {newX, newY}});
                    }
                }
            }
        }
        
        // The answer is the minimum cost to reach the bottom-right corner.
        return distance[n-1][m-1];
    }
};
