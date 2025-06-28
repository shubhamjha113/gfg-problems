class Solution {
  public:
    int f(vector<int> &arr, int k){
        int l=0,r=0,count=0;
        unordered_map<int,int> mp;
        while(r<arr.size()){
            mp[arr[r]]++;
            while(mp.size()>k){
                mp[arr[l]]--;
                if(mp[arr[l]]==0) mp.erase(arr[l]);
                l++;
            }
            count += r-l+1;
            r++;
        }
        return count;
    }
    
    int exactlyK(vector<int> &arr, int k) {
        return f(arr,k)-f(arr,k-1);
    }
};