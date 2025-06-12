// User function Template for C++

class Solution {
  public:
    int cutRod(vector<int> &price) {
       int n = price.size();
       vector<int> prev(n+1,0);
       for(int i=0;i<=n;i++){
           prev[i] = i*price[0];
       }
       for(int ind = n-1;ind>0;ind--){
		for(int len = 0;len<=n;len++){
			int notpick = prev[len];
			int pick = INT_MIN, Rodlen = ind+1;
			if(Rodlen<=len) pick = price[ind] + prev[len-Rodlen];
			prev[len] = max(pick,notpick);
		}
	}
	return prev[n];
}
};