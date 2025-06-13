class Solution {
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        int n = s1.size();
        int m = s2.size();
        vector<int>prev(m+1,0),curr(m+1,0);
        
        int ans = 0;
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                 if(s1[i-1]==s2[j-1]){
                     curr[j] = 1+prev[j-1];
                     ans = max(ans,curr[j]);
                 }
                 else curr[j] = 0;
        }
            prev = curr;
        }
        return ans;
    }
};