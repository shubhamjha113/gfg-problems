class Solution {
  public:
    string firstRepChar(string s) {
        vector<int> count(26,0);
        char ch;
        bool flag = false;
        for(int i=0;i<s.size();i++){
            count[s[i]-'a']++;
            if(count[s[i]-'a']==2){
                ch = s[i];
                flag = true;
                break;
            }
        }
        return flag?string(1,ch):"-1"; 
    }
};