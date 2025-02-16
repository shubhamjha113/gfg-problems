//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minChar(string& s) {
        string rev = s;
        reverse(rev.begin(),rev.end());
        int size = s.size();
        s += '$';
        s += rev;
        
        int n  = s.size();
        vector<int> lps(n,0);
        int pre = 0,suff = 1;
        
        while(suff < n){
            //matched
            if(s[suff] == s[pre]){
                lps[suff] = pre +1;
                suff++,pre++;
            }
            //not matched
            else{
                if(pre == 0)
                     suff++;
                else 
                      pre = lps[pre-1];
            }
        }
        
       return size - lps[n-1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends