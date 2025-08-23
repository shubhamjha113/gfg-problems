class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0 , e = n-1,ans = -1;
        while(s <= e){
            int mid = s + (e-s)/2;
            if(arr[mid] > target){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans==-1?n:ans;
    }
};
