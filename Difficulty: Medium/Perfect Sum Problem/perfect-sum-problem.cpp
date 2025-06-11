class Solution {
  public:
    int perfectSum(vector<int>& arr, int k) {
        int n = arr.size();
	 vector<int>prev(k + 1, 0),curr(k+1,0);

	// Correct base case initialization
	if(arr[0] == 0) prev[0] = 2;
	else prev[0] = 1;

	if(arr[0] != 0 && arr[0] <= k)
    prev[arr[0]] = 1;

	for (int ind = 1; ind < n; ind++) {
		for (int sum = 0; sum <= k; sum++) {
			int notPick = prev[sum];
			int pick = 0;
			if (arr[ind] <= sum)
				pick = prev[sum - arr[ind]];
			curr[sum] =( notPick + pick);
		}
		prev = curr;
	}
	return prev[k];
        
    }
};