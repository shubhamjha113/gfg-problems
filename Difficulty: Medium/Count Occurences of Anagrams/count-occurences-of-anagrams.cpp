// User function template for C++
class Solution {
  public:
  bool allZero(vector<int> &count){
      for(int &i:count){
          if(i!=0) return false;
      }
      return true;
  }
    int search(string &pat, string &txt) {
        int ans = 0;
        int n = pat.size();
        vector<int> count(26,0);
        for(int i=0;i<n;i++){
            count[pat[i]-'a']++;
        }
        int i=0,j=0;
        while(j<txt.size()){
            count[txt[j]-'a']--;
            if(j-i+1 == n){
                if(allZero(count)){
                    ans++;
                }
                 count[txt[i]-'a']++;
                 i++;
            } 
            j++;
        }
        return ans;
    }
};