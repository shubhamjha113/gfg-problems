class Solution {
  public:
    string firstRepChar(string s) {
        vector<int> count(26,0);
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            if(count[s[i]-'a']==2){
                return string(1,s[i]);
            }
        }
        return "-1"; 
    }
};