//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int GCD(int a, int b){
      int g = 1;
      int n=min(a,b);
      for(int i=2;i<=n;i++){
          if(a%i==0 &&  b%i==0){
             g = i; 
          }
      }
      return g;
  }
    vector<int> lcmAndGcd(int a, int b) {
        vector<int> ans;
        int gcd = GCD(a,b);
        int lcm = (a*b)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends