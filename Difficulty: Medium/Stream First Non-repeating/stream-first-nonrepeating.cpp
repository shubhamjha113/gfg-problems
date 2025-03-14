//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string FirstNonRepeating(string &s) {
        string B="";
        vector<int> count(26,0);
        queue<char> q;
        for(int i=0;i<s.size();i++){
            if(count[s[i]-'a']>=1){
                count[s[i]-'a']++;
                
                while(!q.empty() && count[q.front()-'a'] > 1){
                    q.pop();
                }
                if(q.empty()) B+='#';
                else B+=q.front();
            }
            else{
                count[s[i]-'a']++;
                q.push(s[i]);
                while(count[q.front()-'a']>1){
                    q.pop();
                }
                B+=q.front();
            }
        }
        return B;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends