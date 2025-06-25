class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(n+1);
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        vector<int> ans(2);
        for(int i=1;i<count.size();i++){
            if(count[i]==2){
                ans[0] = i;
            }
            if(count[i]==0 ){
                ans[1] = i;
            }
        }
        return ans;
    }
};