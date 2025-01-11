//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
       int s=0,e=n;
       int ans=0;
      
       while(s<=e){
            int mid=s+ (e-s)/2;
           int sq = mid*mid;
           if(sq==n) return mid;
           if(sq > n){
               e=mid-1;
           }
           else{
               ans=mid;
               s=mid+1;
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
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends