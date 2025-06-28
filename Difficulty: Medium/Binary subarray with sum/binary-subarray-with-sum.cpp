class Solution {
  public:
  int f(vector<int>& arr, int tar){
      if(tar<0) return 0;
      int l=0,r=0,sum=0,count=0;
      while(r<arr.size()){
          sum += arr[r];
          while(sum>tar){
              sum-=arr[l];
              l++;
          }
          count += r-l+1;
          r++;
      }
      return count;
  }
  
  
    int numberOfSubarrays(vector<int>& arr, int target) {
        return f(arr,target)-f(arr,target-1);
    }
};