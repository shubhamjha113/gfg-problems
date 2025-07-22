class Solution {
  public:
  void f(int node,vector<vector<int>> &adj,int vis[],vector<int> &ans){
      vis[node] = 1;
      ans.push_back(node);
      for(auto &it:adj[node]){
          if(!vis[it]){
              f(it,adj,vis,ans);
          }
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
         int n = adj.size();
         int vis[n] ={0};
         vector<int> ans;
         f(0,adj,vis,ans);
         return ans;
    }
};