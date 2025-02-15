//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        vector<int> lps(s.size(),0);
        int suff = 1,pre =0;
        while(suff < s.size()){
            //if matched 
            if(s[suff] == s[pre]){
                lps[suff] = pre +1;
                suff++;
                pre++;
            }
            //not match
            else{
                if(pre ==0){//agar wo zero index ko point kr rha h 
                    lps[suff] =0;
                    suff++;
                }
                else{
                    pre = lps[pre-1];
                }
            }
        }
        return lps[s.size()-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.longestPrefixSuffix(str) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends