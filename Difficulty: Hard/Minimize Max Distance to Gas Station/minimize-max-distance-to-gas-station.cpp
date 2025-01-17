//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool posStation(vector<int> &stations, int k,double mid){
      int count = 0;
      for(int i=1;i<stations.size();i++){
          int diff = stations[i] - stations[i-1];
          if(diff <= mid){
              continue;
          }
          else{
              count += (diff/mid);
          }
      }
      return count<=k;
      
  }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        double s = 0.0;
        double e=0.0;
        for(int i=1;i<stations.size();i++){
            if(e < stations[i] - stations[i-1]){
                e = stations[i] - stations[i-1];
            }
        }
        double ans = e;
        while(e-s > 1e-9){
            double mid = s + (e-s)/2;
            if(posStation(stations , k , mid)){
                ans = mid;
                e=mid;
            }
            else{
                s = mid;
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
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends