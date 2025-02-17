//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int countSubstr(string& s, int k) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            vector<int> count(26,0);
            int ch=0;
            for(int j=i;j<s.size();j++){
                if(count[s[j]-'a'] == 0){
                    ch++;
                }
                count[s[j]-'a']++;
                
                if(ch==k){
                    ans++;
                }
                
                if(ch >k){
                    break;
                }
                
                
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends