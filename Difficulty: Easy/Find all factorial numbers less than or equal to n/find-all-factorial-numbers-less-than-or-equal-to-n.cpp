//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  void findFactorial(long long n, long long i , vector<long long> &ans){
      long long fact = 1;
      for(long long j=1;j<=i;j++){
          fact *=j;
      }
      if(fact>n) return;
      ans.push_back(fact);
      findFactorial(n,i+1,ans);
  }
    vector<long long> factorialNumbers(long long n) {
        vector<long long> ans;
        findFactorial(n,1,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends