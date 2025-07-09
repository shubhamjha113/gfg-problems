class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int currMax = 1,maxi =0;
        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                   currMax++;
                }
                else{
                    maxi = max(maxi , currMax);
                    currMax = 1;
                }
            }
        }
        return max(maxi , currMax);
    }
};