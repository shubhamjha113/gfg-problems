class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
       int n = arr.size(); 
        int maxlen = 0,sum=0;
        map<int,int> prefixSum;
        prefixSum[0] = -1;
        for(int i=0;i<n;i++){
            sum += arr[i];
            int rem = sum - k;
            if (prefixSum.find(rem) != prefixSum.end()) {
            maxlen = max(maxlen, i - prefixSum[rem]); 
        }

        if (prefixSum.find(sum) == prefixSum.end()) {
            prefixSum[sum] = i;
        }
    }

     return maxlen;
        
    }
};