#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
   void FirstOrSecond(vector<int>& result, vector<vector<int>>& matrix, vector<vector<int>>& visited, int row, int col, int n, int m, char Dir) {
        if (row >= n || row < 0 || col >= m || col < 0) return;
        if (visited[row][col]) return;
        result.push_back(matrix[row][col]);
        visited[row][col] = 1;
        
        if (Dir == 'R') {
            if (col + 1 < m && !visited[row][col + 1]) {
                FirstOrSecond(result, matrix, visited, row, col + 1, n, m, 'R');
            } else {
                FirstOrSecond(result, matrix, visited, row + 1, col, n, m, 'D');
            }
        } else if (Dir == 'D') {
            if (row + 1 < n && !visited[row + 1][col]) {
                FirstOrSecond(result, matrix, visited, row + 1, col, n, m, 'D');
            } else {
                FirstOrSecond(result, matrix, visited, row, col - 1, n, m, 'L');
            }
        } else if (Dir == 'L') {
            if (col - 1 >= 0 && !visited[row][col - 1]) {
                FirstOrSecond(result, matrix, visited, row, col - 1, n, m, 'L');
            } else {
                FirstOrSecond(result, matrix, visited, row - 1, col, n, m, 'U');
            }
        } else if (Dir == 'U') {
            if (row - 1 >= 0 && !visited[row - 1][col]) {
                FirstOrSecond(result, matrix, visited, row - 1, col, n, m, 'U');
            } else {
                FirstOrSecond(result, matrix, visited, row, col + 1, n, m, 'R');
            }
        }
    }

    vector<int> spirallyTraverse(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 0) return {};
        int m = matrix[0].size();
        
        vector<vector<int>> visited(n, vector<int>(m, 0));
        vector<int> result;
        FirstOrSecond(result, matrix, visited, 0, 0, n, m, 'R');
        return result;
    }
};