/*
        Coming back!
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
    bool bfs(vector<int> adj[],vector<int>& vis, int node){
        
        queue<int> que;
        que.push(node);
        vis[node] = 1;
        int edges = 0;
        int res = 0;
        while(!que.empty()){
            int current;
            current = que.front();
            que.pop();
            res++;
            edges += adj[current].size();
            for(auto it : adj[current]){
                if(!vis[it]){
                    que.push(it);
                    vis[it] = 1;
                }
            }
        }
        return ((res*(res - 1)) == edges);
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<int>adj[v+1];
        vector<int>vis(v+1,0);
        
        for(int i = 0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        int res = 0;
        for(int i = 1;i<v+1;i++){
            if(bfs(adj,vis,i)){
                res++;
            }
        }
        return res;
    }
};