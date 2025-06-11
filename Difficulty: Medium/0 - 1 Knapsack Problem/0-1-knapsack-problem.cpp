class Solution {
  public:
  
  int f(int ind,vector<int> &weight, vector<int> &value, int maxW,vector<vector<int>>& dp){
	//base case
	if(ind == 0){
		if(weight[0]<= maxW) return value[0];
		
		return 0;
	}
	if(dp[ind][maxW]!=-1) return dp[ind][maxW];


	int notTake = f(ind-1,weight,value,maxW,dp);
	int take = INT_MIN;
	if(weight[ind] <= maxW) take = value[ind] + f(ind-1,weight,value,maxW-weight[ind],dp);

	return dp[ind][maxW] =  max(take,notTake);

    }
    
    
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>> dp(n,vector<int>(W+1,-1));
	    return f(n-1,wt,val,W,dp);
        
    }
};