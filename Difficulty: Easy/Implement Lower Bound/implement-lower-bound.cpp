class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int ans = -1;
        int s = 0,e= n-1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(arr[mid]>=target){
                ans =  mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans==-1? n : ans;
    }
};
