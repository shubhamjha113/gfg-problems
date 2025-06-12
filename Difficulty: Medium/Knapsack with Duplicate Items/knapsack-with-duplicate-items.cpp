// User function Template for C++

class Solution {
  public:
    int knapSack(vector<int>& profit, vector<int>& weight, int w) {
        int n = weight.size();
        vector<vector<int>> dp(n,vector<int>(w+1,0));
        for(int W = 0;W<=w;W++){
            dp[0][W] = (W/weight[0])*profit[0];
        }
        for(int ind = 1;ind<n;ind++){
            for(int Wt = 0;Wt<=w;Wt++){
                int notpick = dp[ind-1][Wt];
                int pick = INT_MIN;
                if(weight[ind]<= Wt) pick = profit[ind] + dp[ind][Wt-weight[ind]];
                dp[ind][Wt] = max(pick,notpick);
            }   
        }
        return dp[n-1][w];
        
    }
};