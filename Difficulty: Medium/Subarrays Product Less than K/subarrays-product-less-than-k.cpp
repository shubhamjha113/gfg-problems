

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
         long long l=0,r=0,count =0, p=1;
         if(k<=1) return 0;
         while(r<n){
             p *= arr[r];
             while(p>=k){
                 p/=arr[l];
                 l++;
             }
             count += r-l+1;
             r++;
         }
         return count;
    }
};