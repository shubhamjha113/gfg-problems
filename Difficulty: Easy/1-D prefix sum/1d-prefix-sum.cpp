class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        int n = arr.size();
        vector<int> pSum(n);
        pSum[0]=arr[0];
        for(int i=1;i<n;i++){
            pSum[i] = pSum[i-1]+arr[i];
        }
        return pSum;
    }
};