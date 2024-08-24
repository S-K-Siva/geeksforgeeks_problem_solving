#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    /*
    Topic : 0/1 Knapsack problem
    
    Two Methods
        1) Recursion
            i) right to left traversal without sorting the weights
            ii) left to right traversal with sorting the weights corresponding to its value.
        2) Dynamic Programming
    */
    
    // Recursion (i)
    
    int LeftToRightSolve(int bagCapacity, vector<int>& weights, vector<int>& values, int index){
        if(bagCapacity == 0 || index < 0) return 0;
        
        if(weights[index] > bagCapacity) return LeftToRightSolve(bagCapacity, weights, values, index-1);
        
        return max(values[index] + LeftToRightSolve(bagCapacity - weights[index], weights, values, index-1),
        LeftToRightSolve(bagCapacity, weights, values, index-1));
    }
    
    // Recursion (ii)
    
    int RightToLeftSolve(int bagCapacity , vector<int>& weights, vector<int>& values, int index){
        if(index >= weights.size() || bagCapacity == 0) return 0;
        
        if(weights[index] > bagCapacity ) return 0;
        
        return max(values[index] + RightToLeftSolve(bagCapacity - weights[index], weights, values, index+1),
        RightToLeftSolve(bagCapacity, weights, values, index+1));
    }
    
    // Dynamic Programming
    int solveDP(int bagCapacity, vector<int>& weights, vector<int>& values, int index, vector<vector<int>>& dp){
        if(bagCapacity == 0 || index >= weights.size() || weights[index] > bagCapacity) return 0;
        
        if(dp[index][bagCapacity] != -1) return dp[index][bagCapacity];
        
        dp[index][bagCapacity] = max(values[index] + solveDP(bagCapacity - weights[index], weights, values, index+1, dp),
        solveDP(bagCapacity, weights, values, index+1,dp));
        
        return dp[index][bagCapacity];
        
    }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        /*
            Recusion (i)
            TC : O(2^n)
            SC : O(N)
        */
        // return RightToLeftSolve(W, wt, val, wt.size()-1);
        
        /*
            Recursion (ii)
            TC : O(2^n)
            SC : O(N)
        */
        // int index = 0;
        // vector<pair<int,int>> pairs;
        // for(int i = 0;i<wt.size();i++){
        //     pairs.push_back({wt[i],val[i]});
        // }
        // sort(pairs.begin(),pairs.end());
        
        // vector<int> weights,values;
        // for(int i = 0;i<pairs.size();i++){
        //     weights.push_back(pairs[i].first);
        //     values.push_back(pairs[i].second);
        // }
        // return LeftToRightSolve(W, weights, values, index);
        
        /*
            Dynamic Programming (Optimal Solution)
            TC : O(N * W)
            SC : O(N * W) + O(N)
            
            O(N) -> Recursion Stack
        */
        
        vector<vector<int>> dp(wt.size(), vector<int>(W+1,-1));
        int index = 0;
        vector<pair<int,int>> pairs;
        for(int i = 0;i<wt.size();i++){
            pairs.push_back({wt[i],val[i]});
        }
        sort(pairs.begin(),pairs.end());
        
        vector<int> weights,values;
        for(int i = 0;i<pairs.size();i++){
            weights.push_back(pairs[i].first);
            values.push_back(pairs[i].second);
        }
        return solveDP(W, weights, values, index, dp);
        
    }
};
