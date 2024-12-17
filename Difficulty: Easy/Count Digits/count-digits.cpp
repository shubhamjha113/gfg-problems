//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int evenlyDivides(int n) {
        int original = n;
        int ans= 0;
       while(n!=0) {
        int d = n % 10;
        if( d != 0 && original % d == 0  ){
            ans++;
        }
        n = n/10;
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends