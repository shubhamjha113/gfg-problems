// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &str, int k) {
        int n = str.size();
    int l=0,r=0,maxlen=-1;
    unordered_map<char,int> mpp;
    while(r<n){
        mpp[str[r]]++;
        if(mpp.size()>k){
            mpp[str[l]]--;
            if(mpp[str[l]]==0) mpp.erase(str[l]);

            l++;
        }
        if(mpp.size()==k){
             maxlen = max(maxlen,r-l+1);
        }
        r++;
    }
    return maxlen;
        
    }
};