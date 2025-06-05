class Solution {
  public:
  bool f(int ind,int tar,vector<int>& arr,vector<vector<int>> &dp){
      int n = arr.size();
      if(tar==0) return true;
      if(ind == 0) return arr[0]==tar;
      if(dp[ind][tar] != -1) return dp[ind][tar];
      bool notTake = f(ind-1,tar,arr,dp);
      int take =false;
      if(arr[ind]<= tar) take = f(ind-1,tar-arr[ind],arr,dp);
      return dp[ind][tar] = take | notTake;
  }
  
  
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<bool>> dp(n,vector<bool>(sum+1,0));
        for(int i=0;i<n;i++){
            dp[i][0] = true;
        }
        dp[0][arr[0]] = true;
        
        for(int ind=1;ind<n;ind++){
            for(int T = 1;T<=sum;T++){
                bool notTake = dp[ind-1][T];
                bool take =false;
                if(arr[ind]<= T) take = dp[ind-1][T-arr[ind]];
                dp[ind][T] = take || notTake;
            }
        }
        
        
        
        return dp[n-1][sum];
        
    }
};